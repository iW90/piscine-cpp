/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:37:49 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROOM_HPP
# define ROOM_HPP

# include <vector>

class Person;

class Room
{
	private:
		long long ID;
		std::vector<Person*> _occupants;

	public:
		Room() {}
		~Room() {}
		bool canEnter(Person*);
		void enter(Person*);
		void exit(Person*);
		void printOccupant();
};

#endif
