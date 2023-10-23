/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transmission.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:55 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 20:42:51 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSMISSION_HPP
# define TRANSMISSION_HPP

class Transmission
{
	private:
		int		currentGear;
	public:
		Transmission();
		~Transmission();

		int		getCurrentGear() const
		{
			return currentGear;
		}
		void	setCurrentGear(int gear)
		{
			currentGear = gear;
		}

		void	shiftUp()
		{
			setCurrentGear(getCurrentGear() + 1);
		}
		void	shiftDown()
		{
			setCurrentGear(getCurrentGear() - 1);
		}
};

#endif

/*
** Lida com a transmissão e troca de marchas.
*/