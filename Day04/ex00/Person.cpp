/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:04:21 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 08:30:00 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

void Person::update(Event event, bool isBellRinging)
{
	if (event == Event::RingBell)
	{
		std::cout << "The " << getName() << " is " << (isFreeTime ? "leaving class" : "returning to class") << std::endl;
		setFreeTime(isBellRinging);
		setLastRoom(getRoom());
		if (isFreeTime)
		{
			setLastRoom(getRoom());
			getRoom()->exit(this);
		}
		else
		{
			getLastRoom()->enter(this);
			setLastRoom(NULL);
		}
	}
}
