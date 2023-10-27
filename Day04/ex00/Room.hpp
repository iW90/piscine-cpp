/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 07:58:30 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROOM_HPP
# define ROOM_HPP

# include <vector>

class Person;

class Room
{
	private:
		int ID;
		static int nextID;
		std::vector<Person*> _occupants;

	public:
		Room() : ID(++nextID) {}
		~Room() {}
		bool canEnter(Person* p);
		void enter(Person* p) { _occupants.push_back(p); }
		void exit(Person* p)
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
		void printOccupant();
};

#endif
