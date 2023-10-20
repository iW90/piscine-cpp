/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:35:17 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 10:39:04 by inwagner         ###   ########.fr       */
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
		Worker* getTool(Worker* worker) const;
		void setTool(Worker* worker);
		
}