/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 22:53:46 by inwagner         ###   ########.fr       */
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
		bool canEnter(Person*);
		void enter(Person*);
		void exit(Person*);
		void printOccupant();
};

#endif
