/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:49:29 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 08:52:26 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SubscriptionToCourseForm.hpp"

SubscriptionToCourseForm::SubscriptionToCourseForm(\
	const std::string& cName, const std::string& sName) :
	Form(FormType::SubscriptionToCourse),
	courseName(cName),
	studentName(sName)
{}

void	SubscriptionToCourseForm::execute()
{
	std::cout << "Course Subscription Form for " << studentName;
	std::cout << " in course " << courseName;
	if (!isSigned())
	{
		std::cout << " is void." << std::endl;
			return ;
	}
	std::cout << " is approved."  << std::endl;
}