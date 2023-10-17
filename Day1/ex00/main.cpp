/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:37:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 22:30:43 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	Account accountA = Account(0, 100);
	Account accountB = Account(1, 100);

	Bank bank = Bank();
	bank.createAccount(0, 100);
	bank.createAccount(1, 100);

	bank.liquidity -= 200;
	bank.modifyAccount(0, 500);

	std::cout << "Account A: " << bank[0] << std::endl;
	std::cout << "Account B: " << bank[1] << std::endl;

	std::cout << " ----- " << std::endl;

	std::cout << bank << std::endl;

	return 0;
}

/*
int main()
{
	Account accountA = Account();
	accountA.id = 0;
	accountA.value = 100;

	Account accountB = Account();
	accountB.id = 1;
	accountB.value = 100;

	Bank bank = Bank();
	bank.liquidity = 999;
	bank.clientAccounts.push_back(&accountA);
	bank.clientAccounts.push_back(&accountB);

	bank.liquidity -= 200;
	accountA.value += 400;

	std::cout << "Account : " << std::endl;
	std::cout << accountA << std::endl;
	std::cout << accountB << std::endl;

	std::cout << " ----- " << std::endl;

	std::cout << "Bank : " << std::endl;
	std::cout << bank << std::endl;

	return (0);
}
*/
