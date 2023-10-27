/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:35:28 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 22:47:16 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NeedCourseCreationForm.hpp"
# include <iostream>

NeedCourseCreationForm::NeedCourseCreationForm(FormType _formType, std::string name, Professor* responsable, int numberOfClassToGraduate, int maximumNumberOfStudent)
			: Form(_formType), _name(name), _responsable(responsable), _numberOfClassToGraduate(numberOfClassToGraduate), _maximumNumberOfStudent(maximumNumberOfStudent) {}

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
