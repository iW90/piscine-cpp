/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:25:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 21:25:17 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
# define WORKER_HPP

# include "Tool.hpp"
# include "Shovel.hpp"
# include "Hammer.hpp"
# include "Workshop.hpp"
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
		Position				coordonnee;
		Statistic				stat;
		std::vector<Tool*>		tools;
		std::vector<Workshop*>	workshops;

	public:
		Worker(const Position& position, const Statistic& statistics, const std::vector<Tool*>& toolList, const std::vector<Workshop*>& workshopList);
		~Worker();

		// Getters/Setters
		Statistic getStat() const;
		void setStat(const Statistic& stats);

		Position getCoordonnee() const;
		void setCoordonnee(const Position& pos);

		const std::vector<Tool*> &getTools() const;
		void setTool(Tool* tool);

		const std::vector<Workshop*> &getWorkshops() const;
		void setWorkshop(Workshop* workshop);

		// Methods
		Tool* getTool(Tool* tool) const;

		Workshop* getWorkshop(Workshop* workshop) const;

		const std::vector<Workshop*> &getWorkshops() const;

		// Methods
		void removeTool(Tool* tool);
		void addTool(Tool* tool);
		void work(int xp);
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
