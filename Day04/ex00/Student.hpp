/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:43:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 00:55:28 by inwagner         ###   ########.fr       */
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

class Student : public Person, public Observer
{
	private:
		std::vector<Course*> _subscribedCourses;
		bool isFreeTime;
		Room *room;

	public:
		Student(std::string p_name)  : Person(p_name), isFreeTime(false) {}
		~Student() {}
		Course* searchCourse(Course* p_course);
		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
		void setFreeTime(bool freeTime) { isFreeTime = freeTime; }
		void update(Event event, bool isBellRinging)
		{
			if (event == Event::RingBell)
			{
				std::cout << "Student " << getName() << " is " << (isFreeTime ? "going to Courtyard" : "returning to class") << std::endl;
				setFreeTime(isBellRinging);
			}
		}
};

#endif
