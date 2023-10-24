/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:40:15 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 16:40:30 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Person
{
	private:
		std::string _name;
		Room* _currentRoom;
	public:
		Personne(std::string p_name);
		Room* room() {return (_currentRoom);}
};