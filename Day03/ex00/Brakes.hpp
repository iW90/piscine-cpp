/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brakes.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:58:37 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 20:37:22 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAKES_HPP
# define BRAKES_HPP

# define FORCE_MAX 200

class Brakes
{
	private:
		int		forceApplied;
	public:
		Brakes() : forceApplied(0) {};
		~Brakes() {};

		int		getForceApplied() const
		{
			return (forceApplied);
		}
		void	setForceApplied(int force)
		{
			forceApplied = force;
		}

		void	applyForce(int force)
		{
			this->setForceApplied(force);
		}
		void	applyEmergency()
		{
			this->setForceApplied(FORCE_MAX);
		}
};

#endif

/*
** É responsável pelo sistema de freios.
*/

