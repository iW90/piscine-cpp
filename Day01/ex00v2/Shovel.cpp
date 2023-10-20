/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:00:03 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 22:37:16 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Shovel.hpp"

Shovel::Shovel()
{
	numberOfUses = 0;
}

Shovel::~Shovel() {}

int Shovel::getNumberOfUses() const
{
	return numberOfUses;
}

Worker* Shovel::getWorker() const
{
	return worker;
}

void Shovel::setNumberOfUses(int uses)
{
	numberOfUses = uses;
}

void Shovel::setWorker(Worker* worker)
{
	this->worker = worker;
}

void Shovel::use()
{
	if (this->worker)
		numberOfUses++;
}
