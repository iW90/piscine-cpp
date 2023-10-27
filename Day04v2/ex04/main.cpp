/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:47:33 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:49:45 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Professor.hpp"
#include "Secretary.hpp"
#include "Student.hpp"
#include "Headmaster.hpp"

int	main(void)
{
	Secretary sec("Secretary");
	Headmaster hm("Albus", sec);

	Student* student1 = new Student("Harry");
	Student* student2 = new Student("Hermione");
//	Student* student3 = new Student("Ron");

	Professor *professor1 = new Professor("Severus");

	Room* room1 = new Room("Hallway");
//	Room* room2 = new Room("Dinning Hall");

	room1->enter(student1);
	room1->enter(student2);
	room1->enter(professor1);

	hm.addObserver(student1);
	hm.addObserver(student2);
	hm.addObserver(professor1);

	hm.ringBell();

	return 0;
}
