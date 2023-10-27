/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bell.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:52:33 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:55:51 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bell.hpp>
#include <iostream>

void	Bell::notifyObservers(Event event)
{
	isBellRinging = !isBellRinging;
	std::cout << "Bell is ";
	std::cout << (isBellRinging ? "ringing" : "stopped") << std::endl;

	for (size_t i = 0; i < observers.size(); ++i)
		observers[i]->update(event, isBellRinging);
}
