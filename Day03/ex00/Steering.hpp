/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Steering.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:58:16 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 15:58:16 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEERING_HPP
# define STEERING_HPP

class Steering
{
	private:
		int		wheelAngle;
	public:
		Steering();
		~Steering();

		int		getWheelAngle() const;
		void	setWheelAngle(int angle);

		void	turn(int angle);
		void	straighten();
};

#endif

/*
** Trata do volante e das operações relacionadas à direção.
*/