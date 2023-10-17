/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:37:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 20:03:57 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	Bank bank = Bank(2000);
	Account* accountA = bank.createAccount(0, 100);
	Account* accountB = bank.createAccount(1, 100);
	
	bank.modifyAccount(0, 500);

	std::cout << bank << std::endl;

	std::cout << "Accounts1: " << std::endl;
	std::cout << *accountA << std::endl;
	std::cout << *accountB << std::endl;
	std::cout << "\n" << std::endl;

	bank.giveLoan(0, 100);

	std::cout << bank << std::endl;

	std::cout << "Accounts2: " << std::endl;
	std::cout << *accountA << std::endl;
	std::cout << *accountB << std::endl;
	std::cout << "\n" << std::endl;



	bank.depositMoney(0, 100);

	std::cout << bank << std::endl;

	std::cout << "Accounts3: " << std::endl;
	std::cout << *accountA << std::endl;
	std::cout << *accountB << std::endl;

	return 0;
}
