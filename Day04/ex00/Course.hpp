/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Course.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:37:26 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 09:03:26 by inwagner         ###   ########.fr       */
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
		std::string _name;
		Professor* _responsable;
		std::vector<Student*> _students;
		int _numberOfClassToGraduate;
		int _maximumNumberOfStudent;

	public:
		Course(std::string p_name);
		void assign(Professor* p_professor);
		void subscribe(Student* p_student);
};

#endif
