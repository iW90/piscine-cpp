/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:35:17 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 12:11:18 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKSHOP_HPP
# define WORKSHOP_HPP

# include "Worker.hpp"
# include <vector>

class Workshop
{
	private:
		std::vector<Worker*>	workers;

	public:
		Workshop();
		~Workshop();

		//getters
		Worker*	getTool(Worker* worker) const;
		void	setTool(Worker* worker);

		void	removeWorker(Worker* worker);
		void	addWorker(Worker* worker, Tool* tool);
}