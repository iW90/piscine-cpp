/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:45 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 14:29:46 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

// Método para um aluno participar de uma aula
void Student::attendClass(Classroom* p_classroom)
{
	if (p_classroom && !getRoom() && p_classroom->canEnter(this))
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
    for (size_t i = 0; i < _subscribedCourse.size(); ++i)
        if (_subscribedCourse[i] == p_course)
            return _subscribedCourse[i];
    return NULL;
}

// Método para um aluno se formar em um curso
void Student::graduate(Course* p_course)
{
	if (searchCourse(p_course))
	{
		if (p_course->getNumberOfClassesAttended() >= p_course->getNumberOfClassesToGraduate())
			std::cout << "Congratulations, " << getName() << "! You have graduated from the course " << p_course->getName() << std::endl;
		else
			std::cout << getName() << ", you haven't attended enough classes to graduate from the course " << p_course->getName() << std::endl;
	}
	else
		std::cout << getName() << ", you are not enrolled in the course " << p_course->getName() << std::endl;
}
