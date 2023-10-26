/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:40:15 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 09:06:59 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Room;

class Person
{
	private:
		std::string _name;
		Room* _currentRoom;

	public:
		Person(std::string p_name);
		Room* room() { return _currentRoom; }
};

#endif
