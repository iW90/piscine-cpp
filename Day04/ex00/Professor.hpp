/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:45:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:35:13 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROFESSOR_HPP
# define PROFESSOR_HPP

# include "Staff.hpp"

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
