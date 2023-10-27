/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:58:25 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:27:44 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROFESSOR_HPP
# define PROFESSOR_HPP

# include "Staff.hpp"
# include "Observer.hpp"
# include "Bell.hpp"
# include <iostream>
# include "RoomList.hpp"

class	Course;

class	Professor : public Staff
{
	private:
		Course*	_currentCourse;

	public:
		Professor(std::string p_name) : Staff(p_name) {}
		~Professor() {}
		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();
};

#endif