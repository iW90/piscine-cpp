/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:43:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 10:39:23 by inwagner         ###   ########.fr       */
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
		std::vector<Course*> _subscribedCourses;

	public:
		Student(std::string p_name)  : Person(p_name) {}
		~Student() {}
		Course* searchCourse(Course* p_course);
		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
};

#endif
