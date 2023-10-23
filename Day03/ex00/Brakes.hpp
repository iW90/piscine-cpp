/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brakes.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:58:37 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 17:28:26 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAKES_HPP
# define BRAKES_HPP

class Brakes
{
	private:
		int		forceApplied;
	public:
		Brakes();
		~Brakes();

		int		getForceApplied() const;
		void	setForceApplied(int force);

		void	applyForce(int force);
		void	applyEmergency();
};

#endif

/*
** É responsável pelo sistema de freios.
*/

int	getForceApplied()
{
	return (forceApplied);
}

void setForceApplied(int force)
{
	forceApplied = force;
}

void applyForce(int force)
{
	this->setForceApplied(force);
}

void applyEmergency()
{
	std::cout << "Apply Emergency." << std::endl;
}
