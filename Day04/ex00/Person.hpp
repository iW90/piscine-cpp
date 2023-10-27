/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:40:15 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 08:56:40 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
# define PERSON_HPP

# include <string>
# include <iostream>
# include <Bell.hpp>
# include <Room.hpp>

class Room;

class Person : public Observer
{
	private:
		std::string _name;
		Room* _currentRoom;
		Room* _lastRoom;
		bool isFreeTime;

	public:
		Person(std::string p_name) : _name(p_name), _currentRoom(NULL), _lastRoom(NULL), isFreeTime(false) {};
		~Person() {}
		Room* getRoom() { return _currentRoom; }
		void setRoom(Room* room) { _currentRoom = room; }
		Room* getLastRoom() { return _lastRoom; }
		void setLastRoom(Room* room) { _lastRoom = room; }
		std::string getName() { return _name; }
		void setName(std::string name) { _name = name; }
		void setFreeTime(bool freeTime) { isFreeTime = freeTime; }
		void update(Event event, bool isBellRinging);
};

#endif
