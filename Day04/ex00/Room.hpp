/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 01:21:19 by inwagner         ###   ########.fr       */
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

	public:
		std::vector<Person*> _occupants;
		Room() : ID(++nextID) {}
		~Room() {}
		bool canEnter(Person*);
		void enter(Person*);
		void exit(Person*);
		void printOccupant();
};

#endif
