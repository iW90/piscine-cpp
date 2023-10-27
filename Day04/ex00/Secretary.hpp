/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:43 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 11:19:56 by inwagner         ###   ########.fr       */
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
# include "Form.hpp"

class	Form;

class	Secretary : public Staff
{
	private:

	public:
	    Secretary(const std::string& name) : Staff(name) {}
		void 					archiveForm(std::unique_ptr<Form>) {};
		std::unique_ptr<Form>	createForm(FormType p_formType, const std::string& arg1, const std::string& arg2, int arg3, int arg4);
};

#endif
