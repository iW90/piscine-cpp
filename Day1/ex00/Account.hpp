/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:30 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 16:35:01 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_H
# define ACCOUNT_H

# include <iostream>
# include <vector>

class Account
{
	private:
		int	id;
		int	value;

		//getters
		int getId() const
		{
			return (id);
		}

		int getValue() const
		{
			return (value);
		}

	public:
		//setters
		void setAccount(int newId, int newValue)
		{
			id = newId;
			value = newValue;
		}
};

#endif