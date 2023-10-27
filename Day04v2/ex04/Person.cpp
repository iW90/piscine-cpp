/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:18:09 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:35:29 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

void	Person::update(Event event, bool isBellRinging)
{
	if (event == Event::RingBell)
	{
		std::cout << "The " << getName() << " is ";
		std::cout << (_isFreeTime ? "leaving" : "returning to");
		std::cout << " class." << std::endl;

		setFreeTime(isBellRinging);
		setLastRoom(getRoom());
		if (_isFreeTime)
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
