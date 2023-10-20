/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:55:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 22:43:57 by inwagner         ###   ########.fr       */
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

		// Setters
		virtual void	setNumberOfUses(int uses) = 0;
		virtual void	setWorker(Worker* worker) = 0;

};

#endif
