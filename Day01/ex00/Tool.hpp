/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:41:20 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 22:29:35 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_HPP
# define TOOL_HPP

# include "Worker.hpp"

class Worker;

class Tool
{
	protected:
		int		numberOfUses;
		Worker*	worker;

	public:
		// Construtor e destrutor
		Tool();
		virtual ~Tool();

		// Métodos virtuais puros (abstratos) que devem ser implementados pelas classes derivadas
		virtual void	use() = 0;

		virtual Worker* getWorker() const = 0;
		virtual void	setWorker(Worker* worker) = 0;
		
		virtual int		getNumberOfUses() const = 0;
		virtual void	setNumberOfUses(int uses) = 0;
};

#endif
