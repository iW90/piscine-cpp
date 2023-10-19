/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:24:49 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 08:47:15 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Shovel.cpp
#include "Shovel.hpp"

Shovel::Shovel(int uses) : numberOfUses(uses) {}

Shovel::~Shovel() {}

void Shovel::use()
{
	if (numberOfUses > 0)
	{
		std::cout << "Using shovel..." << std::endl;
		numberOfUses--;
	}
	else
		std::cout << "Shovel is worn out." << std::endl;
}

int Shovel::getNumberOfUses() const
{
	return numberOfUses;
}
