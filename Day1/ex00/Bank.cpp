/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:35 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 16:27:43 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"

class Bank
{
		Account() :
			id(-1),
			value(0)
		{
		
		}
	
	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
	{
		p_os << "Bank informations : " << std::endl;
		p_os << "Liquidity : " << p_bank.liquidity << std::endl;
		for (auto &clientAccount : p_bank.clientAccounts)
        p_os << *clientAccount << std::endl;
		return (p_os);
	}
};
