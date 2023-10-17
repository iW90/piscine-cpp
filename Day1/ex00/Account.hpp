/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:30 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 22:25:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

class	Account
{
	private:
		int	id;
		int	value;

		//constructor
		Account(int id, int value);

	public:
		//getters
		int	getId(void) const;
		int	getValue(void) const;

		//destructor
		~Account(void);
};

#endif
