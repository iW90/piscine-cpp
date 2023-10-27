/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:55:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:01:01 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Secretary.hpp"

std::unique_ptr<Form>	Secretary::createForm(FormType p_formType)
{
	switch(p_formType)
	{
		case FormType::CourseFinished:
			return std::make_unique<CourseFinishedForm>();
		case FormType::NeedMoreClassRoom:
			return std::make_unique<NeedMoreClassRoomForm>();
		case FormType::NeedCourseCreation:
			return std::make_unique<NeedCourseCreationForm>();
		case FormType::SubscriptionToCourse:
			return std::make_unique<SubscriptionToCourseForm>();
		default:
			return NULL;
	}
}