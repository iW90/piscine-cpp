/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:25:00 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 09:17:44 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Worker.hpp"

Worker::Worker(const Position& position, const Statistic& statistics, const std::vector<Tool*>& toolList)
		: coordonnee(position), stat(statistics), tools(toolList) {}

Worker::~Worker() {}

Statistic Worker::getStat() const
{
	return stat;
}

void Worker::setStat(const Statistic& stats)
{
	stat = stats;
}

Position Worker::getCoordonnee() const
{
	return coordonnee;
}

void Worker::setCoordonnee(const Position& pos)
{
	coordonnee = pos;
}

Tool* Worker::getTool(Tool* tool) const
{
	for (size_t i = 0; i < tools.size(); ++i)
		if (tools[i] == tool)
			return (tool);
	return (NULL);
}
	
void Worker::setTool(Tool* tool)
{
	tools.push_back(tool);
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

template <typename ToolType>
ToolType* Worker::getToolOfType()
{
	for (size_t i = 0; i < tools.size(); ++i)
	{
		ToolType* tool = dynamic_cast<ToolType*>(tools[i]);
		if (tool != NULL)
			return (tool);
	}
	return (NULL);
}
