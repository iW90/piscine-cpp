/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:26:51 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 09:08:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
# define WORKER_HPP

# include "Tool.hpp"
# include <vector>
# include <string>

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
		Position coordonnee;
		Statistic stat;
		std::vector<Tool*> tools;

	public:
		Worker(const Position& pos, const Statistic& stats);
		~Worker();
		void giveTool(Tool* tool);
		Tool* takeTool(Tool* tool);
		void addTool(Tool* tool);
		void removeTool(Tool* tool);
		Tool* getToolOfType(const std::string& type);
		void work();
};

#endif
