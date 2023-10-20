/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:25:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 22:35:21 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
# define WORKER_HPP

# include "Tool.hpp"
# include <vector>
# include <string>
# include <iostream>

class Tool;

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

		// Methods
		void removeTool(Tool* tool);
		void addTool(Tool* tool);

		template <typename ToolType>
		ToolType* getToolOfType();
};

#endif
