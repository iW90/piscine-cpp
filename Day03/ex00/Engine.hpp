/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engine.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:28 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 20:41:31 by inwagner         ###   ########.fr       */
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

		bool	isStarted() const
		{
			return started;
		}

		int		getSpeed() const
		{
			return speed;
		}
		void	setStarted(bool start)
		{
			started = start;
		}
		void	setSpeed(int spd)
		{
			speed = spd;
		}

		//methods
		void	start()
		{
			started = 1;
		}
		void	stop()
		{
			started = 0;
		}
		void	accelerate(int spd)
		{
			speed += spd;
		}
		void	reverse()
		{
			speed = 0;
		}
};

#endif

/*
** Cuida das operações do motor.
*/
