/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:43:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:26:44 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP

# include "Person.hpp"
# include "Classroom.hpp"
# include "Course.hpp"

class Student : public Person
{
	private:
		std::vector<Course*> _subscribedCourse;

	public:
		Student(std::string p_name) : Person(p_name) {}
		~Student() {}
		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
};

#endif
