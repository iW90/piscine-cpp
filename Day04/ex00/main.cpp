/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:30:51 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 08:34:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StudentList.hpp"
#include "StaffList.hpp"
#include "CourseList.hpp"
#include "RoomList.hpp"

int	main(void)
{
	Student* student1 = new Student("Harry");
	Student* student2 = new Student("Hermione");
	Student* student3 = new Student("Ron");
	StudentList::getInstance().addItem(student1);
	StudentList::getInstance().addItem(student2);
	StudentList::getInstance().addItem(student3);

	std::cout << "Student list:" << std::endl;
	auto students = StudentList::getInstance().getList();
	for(auto student : students)
		std::cout << student->getName() << std::endl;

	Staff *staff1 = new Staff("Hagrid");
	Staff *staff2 = new Staff("Argus");
	StaffList::getInstance().addItem(staff1);
	StaffList::getInstance().addItem(staff2);

	std::cout << "Staff list:" << std::endl;
	auto staffs = StaffList::getInstance().getList();
	for(auto staffs : staffs)
		std::cout << staffs->getName() << std::endl;

	Course* course1 = new Course("Potions");
	Course* course2 = new Course("Charms");
	CourseList::getInstance().addItem(course1);
	CourseList::getInstance().addItem(course2);

	Room* room1 = new Room();
	Room* room2 = new Room();
	RoomList::getInstance().addItem(room1);
	RoomList::getInstance().addItem(room2);

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

	/*
	delete student1;
	delete student2;
	delete student3;
	delete course1;
	delete course2;
	delete staff1;
	delete staff2;
	delete room1;
	delete room2;
	*/

	return 0;
}