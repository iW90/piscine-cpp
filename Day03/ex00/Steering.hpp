/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Steering.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:58:16 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 20:56:31 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEERING_HPP
# define STEERING_HPP

class Steering
{
	private:
		int		wheelAngle;
	public:
		Steering() : wheelAngle(0) {}
		~Steering() {}

		int		getWheelAngle() const
		{
			return wheelAngle;
		}
		void	setWheelAngle(int angle)
		{
			wheelAngle = angle;
		}

		void	turn(int angle)
		{
			setWheelAngle(angle);
		}
		void	straighten()
		{
			setWheelAngle(0);
		}
};

#endif

/*
** Trata do volante e das operações relacionadas à direção.
*/