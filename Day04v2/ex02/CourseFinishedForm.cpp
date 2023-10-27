/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:09:44 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 23:50:14 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CourseFinishedForm.hpp"

CourseFinishedForm::CourseFinishedForm(\
	const std::string& cName,\
	const std::string& sName,\
	int grade,\
	int year) :
Form(FormType::CourseFinished),
courseName(cName),
studentName(sName),
finalGrade(grade),
yearOfCompletion(year)
{}

void	CourseFinishedForm::execute()
{
	std::cout << "Course Finished Form for " << studentName;
	std::cout << " in course " << courseName;

	if (!isSigned())
	{
		std::cout << " is void." << std::endl;
			return ;
	}
	std::cout << " is approved with grade " << finalGrade;
	std::cout << " on graduation year " << yearOfCompletion;
	std::cout << "." << std::endl;
}
