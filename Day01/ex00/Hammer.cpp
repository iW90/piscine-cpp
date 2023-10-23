/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:58:53 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 10:24:54 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hammer.hpp"

Hammer::Hammer()
{
	numberOfUses = 0;
	worker = 0;
}

Hammer::~Hammer()
{
	if (this->worker)
		this->worker->removeTool(this);
}

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
