/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:33 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/16 22:25:02 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int id, int value) : id(id), value(value) {}

int Account::getId(void) const
{
	return id;
}

int Account::getValue(void) const
{
	return value;
}

Account::~Account(void)
{
}
