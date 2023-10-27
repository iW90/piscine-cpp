/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:37:25 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 14:49:42 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
# define PERSON_HPP

# include <string> 

class	Room;

class	Person
{
	private:
		std::string	_name;
		Room*		_currentRoom;

	public:
		Person(std::string p_name) : _name(p_name) {};
		~Person() = default;
		Room*	room() { return (_currentRoom); }
		const std::string getName() const{ return (_name); }
};

#endif
