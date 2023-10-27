/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:05:02 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 01:07:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Secretary.hpp"
#include "Headmaster.hpp"
#include "CourseFinishedForm.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "SubscriptionToCourseForm.hpp"

int main()
{
	Secretary sec("Secretary");
	Headmaster hm("Albus", sec);

	// Create a CourseFinished form
	auto form = sec.createForm(FormType::CourseFinished, "Math101", "John Doe", 95, 2023);

	// Headmaster receives the form
	hm.receiveForm(std::move(form));
	hm.signLastForm();
	hm.dispatchLastForm();

	return 0;
}
