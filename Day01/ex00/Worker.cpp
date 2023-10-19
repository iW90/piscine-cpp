/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:27:29 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 08:46:42 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Worker.cpp
#include "Worker.hpp"

Worker::Worker(const Position& pos, const Statistic& stats)
	: coordonnee(pos), stat(stats) {}

Worker::~Worker()
{
	for (Tool* tool : tools)
		delete tool;
}

void Worker::work() {}

void Worker::giveTool(Tool* tool)
{
	tools.push_back(tool);
}

Tool* Worker::takeTool(Tool* tool)
{
	for (std::vector<Tool*>::iterator it = tools.begin(); it != tools.end(); ++it) {
		if (*it == tool) {
			tools.erase(it);
			return *it;
		}
	}
	return nullptr;
}


void Worker::addTool(Tool* tool)
{
	tools.push_back(tool);
}

void Worker::removeTool(Tool* tool)
{
	tools.erase(std::remove(tools.begin(), tools.end(), tool), tools.end());
	delete tool;
}

Tool* Worker::getToolOfType(const std::string& type)
{
	for (Tool* tool : tools)
	{
		if (dynamic_cast<Shovel*>(tool) && type == "Shovel")
			return tool;
		else if (dynamic_cast<Hammer*>(tool) && type == "Hammer")
			return tool;
	}
	return nullptr;
}
