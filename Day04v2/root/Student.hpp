/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:37:25 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 14:38:21 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP

#include "Person.hpp"

class	Course;
class	Classroom;

class	Student : public Person
{
	private:
		std::vector<Course*>	_subscribedCourse;

	public:
		using	Person::Person;
		void	attendClass(Classroom* p_classroom);
		void	exitClass();
		void	graduate(Course* p_course);
};

#endif
