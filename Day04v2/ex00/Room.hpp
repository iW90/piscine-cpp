/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:04:01 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 18:52:41 by maalexan         ###   ########.fr       */
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
		Room(const std::string& name) : _name(name) ID(++nextId) {};
		~Room() {};
		bool	canEnter(Person*);
		void	enter(Person*);
		void	exit(Person*);

		void	printOccupant();

		const std::string& getName() const { return _name; }
		void setName(const std::string& name) { _name = name; }
};

#endif
