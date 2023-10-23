/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:58:10 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 10:13:48 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAMMER_HPP
# define HAMMER_HPP

# include "Tool.hpp"
# include "Worker.hpp"

class Hammer : public Tool
{
	public:
		// Construtor e destrutor
		Hammer();
		~Hammer();

		// Getters/Setters
		int		getNumberOfUses() const;
		void	setNumberOfUses(int uses);

		Worker*	getWorker() const;
		void	setWorker(Worker* worker);

		// Implementação do método use
		void use();
};

#endif
