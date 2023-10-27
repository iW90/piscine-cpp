/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:58:25 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 23:38:58 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SECRETARY_HPP
# define SECRETARY_HPP

#include <memory>

# include "NeedCourseCreationForm.hpp"
# include "NeedMoreClassRoomForm.hpp"
# include "CourseFinishedForm.hpp"
# include "SubscriptionToCourseForm.hpp"
# include "Staff.hpp"

class	Form;

class	Secretary : public Staff
{
	private:

	public:
	    Secretary(const std::string& name) : Staff(name) {}

		void 					archiveForm(std::unique_ptr<Form>) {};

		std::unique_ptr<Form>	createForm(FormType p_formType,\
		 const std::string& arg1, const std::string& arg2, int arg3, int arg4);
};

#endif
