/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:56:01 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 10:15:21 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOVEL_HPP
# define SHOVEL_HPP

# include "Tool.hpp"
# include "Worker.hpp"

class Shovel : public Tool
{
	public:
		// Construtor e destrutor
		Shovel();
		~Shovel();

		// Getters/Setters
		int		getNumberOfUses() const;
		void	setNumberOfUses(int uses);

		Worker*	getWorker() const;
		void	setWorker(Worker* worker);

		// Implementação do método use
		void	use();
};

#endif
