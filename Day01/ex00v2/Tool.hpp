/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:55:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 09:16:06 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_HPP
# define TOOL_HPP

class Worker;

class Tool
{
	public:
		// Construtor e destrutor
		Tool();
		virtual ~Tool();

		// Métodos virtuais puros (abstratos) que devem ser implementados pelas classes derivadas
		virtual void	use() = 0;

		// Getters
		virtual Worker* getWorker() const = 0;
		virtual int		getNumberOfUses() const = 0;
		
		// Setters
		virtual void	setNumberOfUses(int uses) = 0;
		virtual void	setWorker(Worker* worker) = 0;
};

#endif
