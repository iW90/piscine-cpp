/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:52:59 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 16:39:07 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
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

	Staff *staff1 = new Staff("Hagrid");
	Staff *staff2 = new Staff("Argus");
	StaffList::getInstance().add(staff1);
	StaffList::getInstance().add(staff2);

	std::cout << "Staff list:" << std::endl;
	auto staffs = StaffList::getInstance().getAll();
	for(auto staffs : staffs)
		std::cout << staffs->getName() << std::endl;

	Course* course1 = new Course("Potions");
	Course* course2 = new Course("Charms");
	CourseList::getInstance().add(course1);
	CourseList::getInstance().add(course2);

	Room* room1 = new Room("Hallway");
	Room* room2 = new Room("Dinning Hall");
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
	StaffList& list4 = StaffList::getInstance();

	std::cout << "Both StaffList references point ";
	if(&list3 == &list4)
		std::cout << "to the same instance." << std::endl;
	else
		std::cout << "to different instances! Oops." << std::endl;

	std::cout << "List1" << &list1 << std::endl;
	std::cout << "List3" << &list3 << std::endl;

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

/*
	std::cout << "StudentList and StaffList references point ";
	if(&list1 == &list3)
		std::cout << "to the same instance! Oops." << std::endl;
	else
		std::cout << "to different instances." << std::endl;
*/
