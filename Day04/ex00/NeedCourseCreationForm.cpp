/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:35:28 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 10:23:27 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NeedCourseCreationForm.hpp"
# include <iostream>

NeedCourseCreationForm::NeedCourseCreationForm(std::string name, int numberOfClassToGraduate, int maximumNumberOfStudent)
	: Form(FormType::NeedCourseCreation), \
	_name(name), \
	_responsable(NULL), \
	_numberOfClassToGraduate(numberOfClassToGraduate), \
	_maximumNumberOfStudent(maximumNumberOfStudent) \
	{(void)_responsable;(void)_numberOfClassToGraduate; (void)_maximumNumberOfStudent;}

void	NeedCourseCreationForm::execute()
{
	std::cout << "Course "  << _name;
	std::cout << " creation form ";
	if (!isSigned())
	{
		std::cout << " is void." << std::endl;
			return ;
	}
	std::cout << " is approved." << std::endl;
}
