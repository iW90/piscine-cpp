/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:35 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/18 12:03:51 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"

// Construtor
Bank::Bank(int liquidity) : liquidity(liquidity) {}

// Destrutor
Bank::~Bank(void)
{
	for (std::map<int, Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
		delete it->second;
	clientAccounts.clear();
}

// Getter para Liquidity
int Bank::getLiquidity(void) const
{
	return liquidity;
}

// Método para buscar uma conta através da Id
const Account& Bank::operator[](int accountId) const
{
	std::map<int, Account*>::const_iterator it = clientAccounts.find(accountId);
	if (it != clientAccounts.end())
		return *(it->second);
	throw std::runtime_error("Account not found");
}

// Método para criar uma nova conta
Account* Bank::createAccount(int id, int value)
{
	if (clientAccounts.find(id) != clientAccounts.end())
		throw std::runtime_error("Account with the same ID already exists");
	Account* newAccount = new Account(id, value);
	clientAccounts[id] = newAccount;
	return newAccount;
}

// Método para modificar uma conta
void Bank::modifyAccount(int id, int newValue)
{
	std::map<int, Account*>::iterator it = clientAccounts.find(id);
	if (it != clientAccounts.end())
		it->second->value = newValue;
	else
		throw std::runtime_error("Account not found");
}

const Account& Bank::getAccountById(int id) const
{
	std::map<int, Account*>::const_iterator it = clientAccounts.find(id);
	if (it != clientAccounts.end())
		return *(it->second);
	throw std::runtime_error("Account not found");
}


// Método para conceder um empréstimo
void Bank::giveLoan(int id, int amount)
{
	std::map<int, Account*>::iterator it = clientAccounts.find(id);

	if (it != clientAccounts.end())
	{
		if (liquidity >= amount)
		{
			it->second->value += amount;
			liquidity -= amount;
			return;
		}
		else
			throw std::runtime_error("Bank does not have enough funds for the loan");
	}
	else
		throw std::runtime_error("Account not found");
}

// Método para depoistar o dinheiro
void Bank::depositMoney(int id, int amount)
{
	std::map<int, Account*>::iterator it = clientAccounts.find(id);

	if (it != clientAccounts.end())
	{
		it->second->value += (0.95 * amount);
		liquidity += (0.05 * amount);
	}
	else
		throw std::runtime_error("Account not found");
}

// Método para excluir uma conta
void Bank::deleteAccount(int id)
{
	std::map<int, Account*>::iterator it = clientAccounts.find(id);

	if (it != clientAccounts.end())
	{
		delete it->second;
		clientAccounts.erase(it);
	}
	else
		throw std::runtime_error("Account not found");
}

// Operador de inserção
std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
{
	p_os << "Bank informations: " << std::endl;
	p_os << "Liquidity: " << p_bank.getLiquidity() << std::endl;

	for (std::map<int, Account*>::const_iterator it = p_bank.clientAccounts.begin(); it != p_bank.clientAccounts.end(); ++it)
		p_os << "[" << it->second->getId() << "] - [" << it->second->getValue() << "]" << std::endl;
	return p_os;
}
