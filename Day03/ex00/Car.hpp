/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Car.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:35:13 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 20:48:52 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAR_HPP
# define CAR_HPP

# include "Engine.hpp"
# include "Transmission.hpp"
# include "Steering.hpp"
# include "Brakes.hpp"

class Car
{
	private:
		Engine			engine;
		Transmission	transmission;
		Steering		steering;
		Brakes			brakes;
	public:
		Car() {};
		~Car() {};

		Engine& getEngine()
		{
			return engine;
		}
		Transmission& getTransmission()
		{
			return transmission;
		}
		Steering& getSteering()
		{
			return steering;
		}
		Brakes& getBrakes()
		{
			return brakes;
		}
};

#endif

