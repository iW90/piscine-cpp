/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:33 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 11:01:17 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

// Construtor
Account::Account(int id, int value) : id(id), value(value) {}

// Destrutor
Account::~Account(void) {}

// Getter para Id
int Account::getId(void) const
{
	return id;
}

// Getter para Value
int Account::getValue(void) const
{
	return value;
}
