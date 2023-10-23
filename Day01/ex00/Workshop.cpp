/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:35:09 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 11:39:40 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Workshop.hpp"

Workshop::Workshop() {}

Workshop::~Workshop()
{
	//for (size_t i = 0; i < workers.size(); ++i)
	//	for (size_t j = 0; j < workers[i].size(); j++)
	//		workers[i][j]->removeWorshop(this);
}

Worker* Workshop::getWorker(Worker* worker) const
{
	for (size_t i = 0; i < workers.size(); ++i)
		if (workers[i] == worker)
			return (worker);
	return (NULL);
}
	
void Workshop::setWorker(Worker* worker)
{
	for (size_t i = 0; i < workers.size(); ++i)
		if (workers[i] == worker)
			return ;
	workers.push_back(worker);
}

void Workshop::addWorker(Worker* worker, ToolType toolType)
{
	if (!worker)
		return ;
	for (size_t i = 0; i < workers.size(); ++i)
	{
		if (workers[i] == worker)
		{
			std::cout << "This worker is already in this workshop." << std::endl;
			return ;
		}
	}
	if (!toolType)
		this->setWorker(worker);
	else if (toolType == SHOVEL && getToolOfType<Shovel>(worker))
		this->setWorker(worker);
	else if (toolType == HAMMER && getToolOfType<Hammer>(worker))
		this->setWorker(worker);
	else
		std::cout << "This worker does not have the right tool." << std::endl;
}

void Workshop::removeWorker(Worker* worker)
{
	if (!worker)
		return ;
	for (size_t i = 0; i < workers.size(); ++i)
	{
		if (workers[i] == worker)
		{
			workers[i]->removeWorkshop(this);
			workers.erase(workers.begin() + i);
			return ;
		}
	}
	std::cout << "This worker is not in this workshop." << std::endl;
}

void Workshop::executeWorkDay(int xp)
{
	for (size_t i = 0; i < workers.size(); ++i)
	{
		std::cout << "Worker " << i << " is ";
		(*workers[i]).work(xp);
	}
}
