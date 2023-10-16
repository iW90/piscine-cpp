/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:38 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 17:09:41 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANK_H
# define BANK_H

# include <iostream>
# include <vector>
# include "Account.hpp"

class Bank
{
	private:
		int	liquidity;
		std::vector<Account *> clientAccounts;

		//getters
		int getLiquidity() const
		{
			return (liquidity);
		}

		std::vector<Account *> clientAccounts
		{
			return (clientAccounts)
		}

	public:
		//setters
		void setBank(int newLiquidity, std::vector<Account *> &newlientAccounts)
		{
			liquidity = newLiquidity;
			clientAccount.push_back(newlientAccounts);
		}
};

#endif