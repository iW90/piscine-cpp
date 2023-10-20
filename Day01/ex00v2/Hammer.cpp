/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:58:53 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 22:37:37 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hammer.hpp"

Hammer::Hammer()
{
	numberOfUses = 0;
}

Hammer::~Hammer() {}

int Hammer::getNumberOfUses() const
{
	return numberOfUses;
}

Worker* Hammer::getWorker() const
{
	return worker;
}

void Hammer::setNumberOfUses(int uses)
{
	numberOfUses = uses;
}

void Hammer::setWorker(Worker* worker)
{
	this->worker = worker;
}

void Hammer::use()
{
	if (this->worker)
		numberOfUses++;
}
