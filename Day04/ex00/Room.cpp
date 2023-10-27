/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:40:19 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 11:40:52 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Room.hpp"

void Room::exit(Person* p)
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