/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:35:17 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 11:34:33 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKSHOP_HPP
# define WORKSHOP_HPP

# include "Worker.hpp"
# include <vector>
# include <cstring>

enum ToolType
{
	NONE,
    SHOVEL,
    HAMMER
};

class Workshop
{
	private:
		std::vector<Worker*>	workers;

	public:
		Workshop();
		~Workshop();

		Worker*	getWorker(Worker* worker) const;
		void	setWorker(Worker* worker);

		void	removeWorker(Worker* worker);
		void	addWorker(Worker* worker, ToolType toolType);
		void	executeWorkDay(int xp);
};

#endif