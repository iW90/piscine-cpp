/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:43 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 09:01:43 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SECRETARY_HPP
# define SECRETARY_HPP

# include "Staff.hpp"
# include "Form.hpp"
# include <iostream>
# include <memory>
# include "CourseFinishedForm.hpp"
# include "NeedMoreClassRoomForm.hpp"
# include "NeedCourseCreationForm.hpp"
# include "SubscriptionToCourseForm.hpp"

class Form;

class Secretary : public Staff
{
	public:
		Secretary(std::string p_name) : Staff(p_name) {}
		~Secretary() {}
		void archiveForm(std::unique_ptr<Form>) {};
		std::unique_ptr<Form> createForm(FormType p_formType, const std::string& arg1, const std::string& arg2, int arg3, int arg4);
};

#endif
