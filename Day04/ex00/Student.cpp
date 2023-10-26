/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:45 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:52:50 by inwagner         ###   ########.fr       */
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

/*
// Método para um aluno se formar em um curso
void Student::graduate(Course* p_course)
{
	if (p_course)
	{
		// ???
	}
}
*/
