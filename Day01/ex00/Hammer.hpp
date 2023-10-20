/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:58:10 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 20:22:01 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAMMER_HPP
# define HAMMER_HPP

# include "Tool.hpp"

class Worker;

class Hammer : public Tool
{
	private:
		int		numberOfUses;
		Worker*	worker;
		
	public:
		// Construtor e destrutor
		Hammer();
		~Hammer();

		// Getters
		int		getNumberOfUses() const;
		Worker*	getWorker() const;

		// Setters
		void	setNumberOfUses(int uses);
		void	setWorker(Worker* worker);

		// Implementação do método use
		void use();
};

#endif
