/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:30 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 11:31:00 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

class	Account
{
	private:
	//atributos
		int	id;
		int	value;

		//constructor
		Account(int id, int value);

		//friend
		friend class	Bank;

	public:
		//getters
		int	getId(void) const;
		int	getValue(void) const;

		//destructor
		~Account(void);
};

#endif
