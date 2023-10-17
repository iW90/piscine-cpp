/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:35 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 16:36:31 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"

// Construtor
Bank::Bank(int liquidity) : liquidity(liquidity), clientAccounts(0) {}

// Destrutor
Bank::~Bank(void)
{
	for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
		delete *it;
	clientAccounts.clear();
}

// Getter para Liquidity
int Bank::getLiquidity(void) const
{
	return liquidity;
}

// Método para buscar uma conta através da Id
// CORRIGIR PARA BÔNUS
const Account& Bank::operator[](int accountId) const
{
	for (std::vector<Account*>::const_iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
	{
		if ((*it)->getId() == accountId)
			return *(*it);
	}
	throw std::runtime_error("Account not found");
}

// Método para criar uma nova conta
Account& Bank::createAccount(int id, int value)
{
	for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
		if ((*it)->getId() == id)
			throw std::runtime_error("Account with the same ID already exists");
	Account* newAccount = new Account(id, value);
	clientAccounts.push_back(newAccount);
	return *newAccount;
}

// Método para modificar uma conta
void Bank::modifyAccount(int id, int newValue)
{
	for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
	{
		if ((*it)->getId() == id)
		{
			(*it)->value = newValue;
			return;
		}
	}
	throw std::runtime_error("Account not found");
}

// Método para conceder um empréstimo
void Bank::giveLoan(int id, int amount)
{
	for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
	{
		if ((*it)->getId() == id)
		{
			if (liquidity >= amount)
			{
				(*it)->value += amount;
				liquidity -= amount;
				return;
			}
			else
				throw std::runtime_error("Bank does not have enough funds for the loan");
		}
	}
	throw std::runtime_error("Account not found");
}

// Método para depoistar o dinheiro
void Bank::depositMoney(int id, int amount)
{
	for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
	{
		if ((*it)->getId() == id)
		{
			(*it)->value += amount;
			liquidity += (0.05 * amount);
			return;
		}
	}
	throw std::runtime_error("Account not found");
}

// Método para excluir uma conta
// CORRIGIR PARA BÔNUS
void Bank::deleteAccount(int id)
{
	for (size_t i = 0; i < clientAccounts.size(); ++i)
	{
		if (clientAccounts[i]->getId() == id)
		{
			delete clientAccounts[i];
			clientAccounts.erase(clientAccounts.begin() + i);
			return;
		}
	}
	throw std::runtime_error("Account not found");
}

// Operador de inserção
std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
{
	p_os << "Bank informations: " << std::endl;
	p_os << "Liquidity: " << p_bank.getLiquidity() << std::endl;
	for (std::vector<Account*>::const_iterator it = p_bank.clientAccounts.begin(); it != p_bank.clientAccounts.end(); ++it)
		p_os << "[" << (*it)->getId() << "] - [" << (*it)->getValue() << "]" << std::endl;
	return p_os;
}
