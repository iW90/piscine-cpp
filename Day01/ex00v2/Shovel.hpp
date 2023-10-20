/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:56:01 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 17:01:40 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOVEL_HPP
# define SHOVEL_HPP

# include "Tool.hpp"

class Shovel : public Tool
{
	private:
		int		numberOfUses;
		Worker*	worker;

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
