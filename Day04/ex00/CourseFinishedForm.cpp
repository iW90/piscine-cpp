/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:27:51 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 22:30:39 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CourseFinishedForm.hpp"

CourseFinishedForm::CourseFinishedForm(const std::string& cName, const std::string& sName, int grade, int year) :
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
	std::cout << " on year " << yearOfCompletion;
	std::cout << "of graduation." << std::endl;
}
