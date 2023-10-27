/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bell.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:37:23 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 00:49:05 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bell.hpp>
#include <iostream>

void Bell::notifyObservers(Event event)
{
	isBellRinging = !isBellRinging;
	std::cout << "Bell is " << (isBellRinging ? "ringing" : "stopped") << std::endl;

	for (size_t i = 0; i < observers.size(); ++i)
		observers[i]->update(event, isBellRinging);
}
