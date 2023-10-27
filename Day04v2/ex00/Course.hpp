/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Course.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:02:20 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 14:56:35 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COURSE_HPP
# define COURSE_HPP

# include <string>
# include <vector>

class	Professor;
class	Student;

class Course
{
	private:
		std::string				_name;
		Professor*				_responsable;
		std::vector<Student*>	_students;
		int 					_numberOfClassToGraduate;
		int						_maximumNumberOfStudent;

	public:
		Course(std::string p_name) : 
		_name(p_name),_responsable(nullptr),
		_numberOfClassToGraduate(0),
		_maximumNumberOfStudent(0)
		{}
		~Course() = default;

		void	assign(Professor* p_professor);
		void	subscribe(Student* p_student);
};

#endif
