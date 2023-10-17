/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:30 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 20:00:48 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>

class Bank;

class	Account
{
	private:
		//atributtes
		int	id;
		int	value;

		//constructor
		Account(int id, int value);

		//friends
		friend class	Bank;

	public:
		//getters
		int	getId(void) const;
		int	getValue(void) const;

		//destructor
		~Account(void);

		//operators
		friend std::ostream& operator << (std::ostream& p_os, const Account& p_account);
};

#endif
