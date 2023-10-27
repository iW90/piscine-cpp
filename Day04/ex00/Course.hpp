/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Course.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:37:26 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 22:23:52 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COURSE_HPP
# define COURSE_HPP

# include <string>
# include <vector>

class Professor;
class Student;

class Course
{
	private:
		std::string				_name;
		Professor*				_responsable;
		std::vector<Student*>	_students;
		int 					_numberOfClassToGraduate;
		int						_maximumNumberOfStudent;

	public:
		Course(std::string p_name) : _name(p_name), _numberOfClassToGraduate(0), _maximumNumberOfStudent(40) {}
		~Course() {}
		void assign(Professor* p_professor);
		void subscribe(Student* p_student);
};

#endif
