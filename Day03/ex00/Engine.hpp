/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engine.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:28 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 17:30:19 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_HPP
# define ENGINE_HPP

class Engine
{
	private:
		bool	started;
		int		speed;
	public:
		Engine();
		~Engine();

		bool	isStarted() const;
		int		getSpeed() const;
		void	setStarted(bool started);
		void	setSpeed(int speed);

		void	start();
		void	stop();
		void	accelerate(int speed);
		void	reverse();
};

#endif

/*
** Cuida das operações do motor.
*/

bool	isStarted()
{
	return started;
}

int		getSpeed()
{
	return speed;
}

