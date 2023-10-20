/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:25:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 15:21:34 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
# define WORKER_HPP

# include "Tool.hpp"
# include "Shovel.hpp"
# include "Hammer.hpp"
# include <vector>
# include <string>
# include <iostream>

struct Position
{
	int x;
	int y;
	int z;
};

struct Statistic
{
	int level;
	int exp;
};

class Worker
{
	private:
		Position			coordonnee;
		Statistic			stat;
		std::vector<Tool*>	tools;

	public:
		Worker(const Position& position, const Statistic& statistics, const std::vector<Tool*>& toolList);
		~Worker();

		Statistic getStat() const;
		void setStat(const Statistic& stats);

		Position getCoordonnee() const;
		void setCoordonnee(const Position& pos);

		Tool* getTool(Tool* tool) const;
		void setTool(Tool* tool);

		const std::vector<Tool*> &getTools() const;

		// Methods
		void removeTool(Tool* tool);
		void addTool(Tool* tool);
};

template <typename T>
T* getToolOfType(Worker *worker)
{
	const std::vector<Tool*> tools = worker->getTools();	
	for (size_t i = 0; i < tools.size(); ++i)
	{
		T* tool = dynamic_cast<T*>(tools[i]);
		if (tool != NULL)
			return (tool);
	}
	return (NULL);
}

#endif
