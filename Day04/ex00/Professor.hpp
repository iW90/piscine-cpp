/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:45:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:49:15 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROFESSOR_HPP
# define PROFESSOR_HPP

# include "Staff.hpp"
# include "Observer.hpp"
# include "Bell.hpp"
# include <iostream>

class Course;

class Professor : public Staff, public Observer
{
	private:
		Course* _currentCourse;
		bool isFreeTime;

	public:
		Professor(std::string p_name) : Staff(p_name) {}
		~Professor() {}
		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();
		void update(Event event)
		{
			if (event == Event::RingBell)
				std::cout << "Professor " << getName() << " is " << (isFreeTime ? "going to StaffRestRoom" : "returning to class") << std::endl;
		}
		void setFreeTime(bool freeTime) { isFreeTime = freeTime; }
};

#endif
