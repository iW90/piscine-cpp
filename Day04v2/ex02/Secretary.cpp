/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:09:04 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 23:29:54 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Secretary.hpp"


std::unique_ptr<Form> Secretary::createForm(\
FormType p_formType,\
 const std::string& arg1 = "",\
 const std::string& arg2 = "",\
 int arg3 = 0,\
 int arg4 = 0)
{
	switch(p_formType)
	{
		case FormType::CourseFinished:
			return std::make_unique <CourseFinishedForm>(arg1, arg2, arg3, arg4);
		case FormType::NeedMoreClassRoom:
			return std::make_unique <NeedMoreClassRoomForm>(arg1, arg3, arg4);
		case FormType::NeedCourseCreation:
			return std::make_unique <NeedCourseCreationForm>(arg1, arg3, arg4);
		case FormType::SubscriptionToCourse:
			return std::make_unique <SubscriptionToCourseForm>(arg1, arg2);
		default:
			return nullptr;
	}
}
