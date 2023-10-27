/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:37:25 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:23:55 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP

# include <iostream>
# include "Observer.hpp"
# include "Person.hpp"
# include "Classroom.hpp"
# include "Course.hpp"
# include "Bell.hpp"
# include "RoomList.hpp"

class Student : public Person
{
	private:
		std::vector<Course*>	_subscribedCourses;

	public:
		Student(std::string p_name) : Person(p_name) {}
		~Student() {}

		Course* searchCourse(Course* p_course);
		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
};

#endif
