/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classroom.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:44 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 22:20:07 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSROOM_HPP
# define CLASSROOM_HPP

# include "Room.hpp"

class Course;

class Classroom : public Room
{
	private:
		Course* _currentCourse;

	public:
		Classroom() : _currentCourse (0) {}
		~Classroom() {}
		void assignCourse(Course* p_course) { _currentCourse = p_course; }
};

#endif
