/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:28:31 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 08:47:59 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKSHOP_HPP
# define WORKSHOP_HPP

# include "Worker.hpp"
# include <vector>

class Workshop
{
	private:
		std::vector<Worker*> workers;
		std::string requiredToolType;

	public:
		Workshop();
		~Workshop();
		void registerWorker(Worker* worker, const std::string& requiredToolType);
		void releaseWorker(Worker* worker);
		void executeWorkDay();
};

#endif
