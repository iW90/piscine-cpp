/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:35:09 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 11:56:14 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Workshop.hpp"

Tool* Workshop::getWorker(Worker* worker) const
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

void Workshop::addWorker(Worker* worker, Tool* tool)
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
	if (!tool)
		this->setWorker(worker);
	else if (!worker->getTool(tool))
		std::cout << "This worker does not have the right tool." << std::endl;
	else
		this->setWorker(worker);
}
