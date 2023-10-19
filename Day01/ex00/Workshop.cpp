/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:28:14 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 08:48:25 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Workshop.hpp"

Workshop::Workshop() {}

Workshop::~Workshop()
{
	for (Worker* worker : workers)
		delete worker;
}

void Workshop::registerWorker(Worker* worker, const std::string& requiredToolType)
{
	if (worker->getToolOfType(requiredToolType))
		workers.push_back(worker);
	else
		std::cout << "Worker does not have the required tool to join the workshop." << std::endl;
}

void Workshop::releaseWorker(Worker* worker)
{
	workers.erase(std::remove(workers.begin(), workers.end(), worker), workers.end());
}

void Workshop::executeWorkDay()
{
	for (Worker* worker : workers)
		worker->work();
}
