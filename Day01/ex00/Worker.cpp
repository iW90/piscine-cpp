/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:25:00 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 15:33:30 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Worker.hpp"

Worker::Worker(const Position& position, const Statistic& statistics, const std::vector<Tool*>& toolList)
		: coordonnee(position), stat(statistics), tools(toolList), workshops() {}

Worker::~Worker()
{
	for (size_t i = 0; i < tools.size(); ++i)
		tools[i]->setWorker(0);
	if (!workshops.empty())
		for (size_t i = 0; i < workshops.size(); ++i)
			workshops[i]->removeWorker(this);
}

Statistic Worker::getStat() const
{
	return (stat);
}

void Worker::setStat(const Statistic& stats)
{
	stat = stats;
}

Position Worker::getCoordonnee() const
{
	return (coordonnee);
}

void Worker::setCoordonnee(const Position& pos)
{
	coordonnee = pos;
}

const std::vector<Tool*> &Worker::getTools() const
{
	return (tools);
}
	
void Worker::setTool(Tool* tool)
{
	for (size_t i = 0; i < tools.size(); ++i)
		if (tools[i] == tool)
			return ;
	tools.push_back(tool);
}

const std::vector<Workshop*> &Worker::getWorkshops() const
{
	return (workshops);
}

void Worker::setWorkshop(Workshop* workshop)
{
	for (size_t i = 0; i < workshops.size(); ++i)
		if (workshops[i] == workshop)
			return ;
	workshops.push_back(workshop);
}

// Busca uma ferramenta específica
Tool* Worker::getTool(Tool* tool) const
{
	for (size_t i = 0; i < tools.size(); ++i)
		if (tools[i] == tool)
			return (tool);
	std::cout << "This tool is not with this worker." << std::endl;
	return (NULL);
}

// Busca um workshop específico
Workshop* Worker::getWorkshop(Workshop* workshop) const
{
	for (size_t i = 0; i < workshops.size(); ++i)
		if (workshops[i] == workshop)
			return (workshop);
	std::cout << "This work is not in this workshop." << std::endl;
	return (NULL);
}

void Worker::removeTool(Tool* tool)
{
	for (size_t i = 0; i < tools.size(); ++i)
	{
		if (tools[i] == tool)
		{
			tool->setWorker(NULL);
			tools.erase(tools.begin() + i);
			return ;
		}
	}
	std::cout << "This tool is not with this worker." << std::endl;
}

void Worker::addTool(Tool* tool)
{
	if (!tool)
		return ;
	for (size_t i = 0; i < tools.size(); ++i)
	{
		if (tools[i] == tool)
		{
			std::cout << "This tool is already with this worker." << std::endl;
			return ;
		}
	}
	if (Worker* worker = tool->getWorker())
		worker->removeTool(tool);
	tool->setWorker(this);
	setTool(tool);
}

void Worker::work(int xp)
{
	if (!workshops.empty())
	{
		std::cout << "working." << std::endl;
		this->stat.exp += xp;
		this->stat.level = this->stat.exp / 100;
	}
}

void Worker::removeWorkshop(Workshop* workshop)
{
	if (!workshop)
		return ;
	for (size_t i = 0; i < workshops.size(); ++i)
	{
		if (workshops[i] == workshop)
		{
			workshops.erase(workshops.begin() + i);
			return ;
		}
	}
	std::cout << "This worker is not in this workshop." << std::endl;
}
