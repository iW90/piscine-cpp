/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:26:14 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 08:50:53 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hammer.cpp
#include "Hammer.hpp"

Hammer::Hammer(int uses) : numberOfUses(uses) {}

Hammer::~Hammer() {}

int Hammer::getNumberOfUses() const
{
	return numberOfUses;
}

void Hammer::use()
{
	if (numberOfUses > 0)
	{
		std::cout << "Using hammer..." << std::endl;
		numberOfUses--;
	}
	else
		std::cout << "Hammer is worn out." << std::endl;
}
