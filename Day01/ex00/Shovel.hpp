/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:56:01 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 22:19:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOVEL_HPP
# define SHOVEL_HPP

# include "Tool.hpp"

class Shovel : public Tool
{
	public:
		// Construtor e destrutor
		Shovel();
		~Shovel();

		// Getters
		int		getNumberOfUses() const;
		Worker*	getWorker() const;

		// Setters
		void	setNumberOfUses(int uses);
		void	setWorker(Worker* worker);

		// Implementação do método use
		void	use();
};

#endif
