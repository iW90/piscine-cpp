/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 16:38:15 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Room
{
	private:
		long long ID;
		std::vector<Person*> _occupants;

	public:
		Room();
		bool canEnter(Person*);
		void enter(Person*);
		void exit(Person*);
		
		void printOccupant();
};