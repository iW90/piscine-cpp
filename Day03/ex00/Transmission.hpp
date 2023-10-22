/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transmission.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:55 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 15:57:55 by inwagner         ###   ########.fr       */
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

		int		getCurrentGear() const;
		void	setCurrentGear(int gear);

		void	shiftUp();
		void	shiftDown();
};

#endif

/*
** Lida com a transmissão e troca de marchas.
*/