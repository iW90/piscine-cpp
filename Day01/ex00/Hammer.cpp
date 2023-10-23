/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:58:53 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 22:19:01 by inwagner         ###   ########.fr       */
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
	//for (size_t i = 0; i < workers.size(); ++i)
	//	tools[i]->setWorker(0);
		
	//worker->removeTool(this);
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
