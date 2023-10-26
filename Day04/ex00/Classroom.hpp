/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classroom.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:44 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 09:05:07 by inwagner         ###   ########.fr       */
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
		Classroom();
		void assignCourse(Course* p_course);
};

#endif
