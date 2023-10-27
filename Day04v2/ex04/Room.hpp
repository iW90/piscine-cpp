/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:04:01 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:40:26 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROOM_HPP
# define ROOM_HPP

#include <vector>
#include <string>

class	Person;

class	Room
{
	private:
		long long				ID;
		static long long		nextId;
		std::string				_name;
		std::vector<Person*>	_occupants;

	public:
		Room() {};
		Room(const std::string& name) : ID(++nextId), _name(name) {};
		~Room() {};

		bool	canEnter(Person* p);
		void	enter(Person* p) { _occupants.push_back(p); }
		void	exit(Person*p);
		void	printOccupant();

		const std::string& getName() const { return _name; }
		void setName(const std::string& name) { _name = name; }
};

#endif
