/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:37:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/18 11:58:38 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	try
	{
		Bank bank = Bank(2000);
		Account* accountA = bank.createAccount(0, 100);
		Account* accountB = bank.createAccount(1, 100);
		const Account& accountC = bank[0];
		(void)accountC;
		
		const Account& accountD = bank.getAccountById(0);
		std::cout << accountD << std::endl;

		std::cout << "[init]" << std::endl;
		std::cout << bank << std::endl;
		std::cout << "Accounts:" << std::endl;
		std::cout << *accountA << std::endl;
		std::cout << *accountB << std::endl;
		std::cout << "\n" << std::endl;

		std::cout << "[modifyAccount 0, 500]" << std::endl;
		bank.modifyAccount(0, 500);
		std::cout << bank << std::endl;
		std::cout << "Accounts:" << std::endl;
		std::cout << *accountA << std::endl;
		std::cout << *accountB << std::endl;
		std::cout << "\n" << std::endl;

		std::cout << "[giveLoan 0, 100]" << std::endl;
		bank.giveLoan(0, 100);
		std::cout << bank << std::endl;

		std::cout << "[depositMoney 0, 100]" << std::endl;
		bank.depositMoney(0, 100);
		std::cout << bank << std::endl;

		std::cout << "[deleteAccount 0]" << std::endl;
		bank.deleteAccount(0);
		std::cout << bank << std::endl;

		std::cout << "[depositMoney 0, 100] - Exception (Deleted Account)" << std::endl;
		bank.depositMoney(0, 100);
		std::cout << bank << std::endl;

	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
