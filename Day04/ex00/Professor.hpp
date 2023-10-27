/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:45:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 11:27:28 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROFESSOR_HPP
# define PROFESSOR_HPP

# include "Staff.hpp"
# include "Observer.hpp"
# include "Bell.hpp"
# include <iostream>
# include "RoomList.hpp"

class Course;

class Professor : public Staff
{
	private:
		Course* _currentCourse;

	public:
		Professor(std::string p_name) : Staff(p_name) {}
		~Professor() {}
		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();
};

#endif
