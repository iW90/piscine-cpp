/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:40:15 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:28:13 by inwagner         ###   ########.fr       */
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
		Person(std::string p_name) : _name(p_name) {};
		~Person() {}
		Room* getRoom() { return _currentRoom; }
		void setRoom(Room* room) { _currentRoom = room; }
		std::string getName() { return _name; }
		void setName(std::string name) { _name = name; }
};

#endif
