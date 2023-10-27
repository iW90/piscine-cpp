/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:09:44 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 23:11:08 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NeedCourseCreationForm.hpp"

NeedCourseCreationForm::NeedCourseCreationForm(\
const std::string& cName, int duration, int attendance) :
Form(FormType::NeedCourseCreation),
courseName(cName),
semesterDuration(duration),
maximumAttendance(attendance)
{}

void	NeedCourseCreationForm::execute()
{
	std::cout << "Course "  << courseName;
	std::cout << " creation form ";
	if (!isSigned())
	{
		std::cout << " is void." << std::endl;
			return ;
	}
	std::cout << " is approved for " << semesterDuration;
	std::cout << " semesters up to a maximum of " << maximumAttendance;
	std::cout << " students." << std::endl;
}
