/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:24 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:50:30 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StudentList.hpp"
#include "StaffList.hpp"
#include "CourseList.hpp"
#include "RoomList.hpp"

int main()
{
	// Crie instâncias únicas das listas
	StudentList& students = StudentList::getItem();
	StaffList staff;
	CourseList courses;
	RoomList rooms;

	// Popule as listas manualmente (insira elementos)
	students.addItem(new Student("John"));
	students.addItem(new Student("Alice"));
	staff.addItem(new Staff("Professor Smith"));
	courses.addItem(new Course("Math 101"));
	rooms.addItem(new Room());

	// Recupere elementos das listas
	Student* student1 = students.getItem(0);
	Staff* staff1 = staff.getItem(0);
	Course* course1 = courses.getItem(0);
	Room* room1 = rooms.getItem(0);

	// Faça algo com os elementos recuperados, se necessário

	// Lembre-se de liberar a memória alocada para os elementos, se necessário
	delete student1;
	delete staff1;
	delete course1;
	delete room1;

	return 0;
}
