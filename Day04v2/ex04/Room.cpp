/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:21:52 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:51:27 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Room.hpp"

long long	Room::nextId = 1;

void	Room::exit(Person* p)
{
	for (size_t i = 0; i < _occupants.size(); ++i)
	{
		if (_occupants[i] == p)
		{
			_occupants.erase(_occupants.begin() + i);
			break;
		}
	}
}