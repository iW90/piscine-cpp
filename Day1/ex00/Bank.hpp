/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:38 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 15:33:09 by inwagner         ###   ########.fr       */
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

	public:
		Bank() :
			liquidity(0)
		{

		}
}

#endif