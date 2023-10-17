/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:35 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 11:59:46 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"

// Construtor
Bank::Bank() : liquidity(0) {}

// Destrutor
Bank::~Bank()
{
	for (Account* account : clientAccounts)
		delete account;
	clientAccounts.clear();
}

// Getter para Liquidity
int Account::getLiquidity(void) const
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
        {
            return *(*it);
        }
    }
    throw std::runtime_error("Account not found");
}

// Método para criar uma nova conta
void Bank::createAccount(int id, int value)
{
    for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it)
    {
        if ((*it)->getId() == id)
        {
            throw std::runtime_error("Account with the same ID already exists");
        }
    }
    clientAccounts.push_back(new Account(id, value));
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
            {
                throw std::runtime_error("Bank does not have enough funds for the loan");
            }
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


// Operador de inserção
std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
{
	p_os << "Bank informations: " << std::endl;
	p_os << "Liquidity: " << p_bank.liquidity << std::endl;
	for (const Account* clientAccount : p_bank.clientAccounts)
	{
		p_os << "[" << clientAccount->getId() << "] - [" << clientAccount->getValue() << "]" << std::endl;
	}
	return p_os;
}
