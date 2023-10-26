/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:24 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 16:36:51 by inwagner         ###   ########.fr       */
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
	StaffList& staff = StaffList::getItem();
	CourseList& courses = CourseList::getItem();
	RoomList& rooms = RoomList::getItem();

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


int    main(void)
{
	Student* student1 = new Student("Harry");
	Student* student2 = new Student("Hermione");
	Student* student3 = new Student("Ron");
	StudentList::getInstance().add(student1);
	StudentList::getInstance().add(student2);
	StudentList::getInstance().add(student3);

	std::cout << "Student list:" << std::endl;
	auto students = StudentList::getInstance().getAll();
	for(auto student : students)
		std::cout << student->getName() << std::endl;

	Staff *staff1 = new Staff("Adelaide");
	Staff *staff2 = new Staff("Bucileide");
	StaffList::getInstance().add(staff1);
	StaffList::getInstance().add(staff2);

	std::cout << "Staff list:" << std::endl;
	auto staffs = StaffList::getInstance().getAll();
	for(auto staffs : staffs)
		std::cout << staffs->getName() << std::endl;

	Course* course1 = new Course("Curso A");
	Course* course2 = new Course("Curso B");
	CourseList::getInstance().add(course1);
	CourseList::getInstance().add(course2);

	Room* room1 = new Room();
	Room* room2 = new Room();

	room1.assignCourse(course1);
	room1.assignCourse(course2);
	
	RoomList::getInstance().add(room1);
	RoomList::getInstance().add(room2);


	StudentList& list1 = StudentList::getInstance();
	StudentList& list2 = StudentList::getInstance();

	std::cout << "Both StudentList references point ";
	if(&list1 == &list2)
		std::cout << "to the same instance." << std::endl;
	else
		std::cout << "to different instances! Oops." << std::endl;

	StaffList& list3 = StaffList::getInstance();

		

	delete student1;
	delete student2;
	delete student3;
	delete course1;
	delete course2;
	delete staff1;
	delete staff2;
	delete room1;
	delete room2;

	return 0;
}