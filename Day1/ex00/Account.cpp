/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:33 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 15:22:42 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

class Account
{
	Account() :
		id(-1),
		value(0)
	{
	
	}

	friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
	{
		p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
		return (p_os);
	}
};
