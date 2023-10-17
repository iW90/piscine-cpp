/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:35 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 22:27:28 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"

Bank::Bank() : liquidity(0) {}

Bank::~Bank()
{
	for (Account* account : clientAccounts)
		delete account;
	clientAccounts.clear();
}

const Account& Bank::operator[](int accountId) const {
	for (const Account* account : clientAccounts) {
		if (account->getId() == accountId) {
			return *account;
		}
	}
	throw std::runtime_error("Account not found");
}

void Bank::createAccount(int id, int value) {
	for (const Account* account : clientAccounts) {
		if (account->getId() == id) {
			throw std::runtime_error("Account with the same ID already exists");
		}
	}
	clientAccounts.push_back(new Account(id, value));
}

void Bank::deleteAccount(int id) {
	for (size_t i = 0; i < clientAccounts.size(); ++i) {
		if (clientAccounts[i]->getId() == id) {
			delete clientAccounts[i];
			clientAccounts.erase(clientAccounts.begin() + i);
			return;
		}
	}
	throw std::runtime_error("Account not found");
}

void Bank::modifyAccount(int id, int newValue) {
	for (Account* account : clientAccounts) {
		if (account->getId() == id) {
			account->value = newValue;
			return;
		}
	}
	throw std::runtime_error("Account not found");
}

void Bank::giveLoan(int id, int amount) {
	for (Account* account : clientAccounts) {
		if (account->getId() == id) {
			if (liquidity >= amount) {
				account->value += amount;
				liquidity -= amount;
			} else {
				throw std::runtime_error("Bank does not have enough funds for the loan");
			}
			return;
		}
	}
	throw std::runtime_error("Account not found");
}

void Bank::depositMoney(int id, int amount) {
	for (Account* account : clientAccounts) {
		if (account->getId() == id) {
			account->value += amount;
			liquidity += (0.05 * amount);
			return;
		}
	}
	throw std::runtime_error("Account not found");
}

std::ostream& operator<<(std::ostream& p_os, const Bank& p_bank)
{
	p_os << "Bank informations: " << std::endl;
	p_os << "Liquidity: " << p_bank.liquidity << std::endl;
	for (const Account* clientAccount : p_bank.clientAccounts)
	{
		p_os << "[" << clientAccount->getId() << "] - [" << clientAccount->getValue() << "]" << std::endl;
	}
	return p_os;
}
