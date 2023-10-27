/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:45 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 10:45:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

// Método para um aluno participar de uma aula
void Student::attendClass(Classroom* p_classroom)
{
	if (p_classroom && !getRoom())
	{
		setRoom(p_classroom);
		p_classroom->enter(this);
	}
}

// Método para um aluno sair de uma aula
void Student::exitClass()
{
	if (getRoom())
		setRoom(NULL);
}

// Método para encontrar um curso na lista de cursos inscritos
Course* Student::searchCourse(Course* p_course)
{
	for (size_t i = 0; i < _subscribedCourses.size(); ++i)
		if (_subscribedCourses[i] == p_course)
			return _subscribedCourses[i];
	return NULL;
}

// Método para um aluno se formar em um curso
void Student::graduate(Course* p_course)
{
	(void)p_course;
}
