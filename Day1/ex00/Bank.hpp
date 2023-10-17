/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:38 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 22:19:07 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANK_HPP
# define BANK_HPP

# include "Account.hpp"
# include <vector>
# include <iostream>

class	Bank
{
	private:
		int						liquidity;
		std::vector<Account*>	clientAccounts;

	public:
		Bank(void);
		~Bank(void);

		const Account& operator[](int accountId) const;

		void createAccount(int id, int value);
		void deleteAccount(int id);
		void modifyAccount(int id, int newValue);

		void giveLoan(int id, int amount);

		void depositMoney(int id, int amount);

		friend std::ostream& operator<<(std::ostream& p_os, const Bank& p_bank);

};

#endif
