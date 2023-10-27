/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:43:15 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 08:52:39 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBSCRIPTION_TO_COURSE_FORM_HPP
# define SUBSCRIPTION_TO_COURSE_FORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class SubscriptionToCourseForm : public Form
{
	private:
		std::string	courseName;
		std::string	studentName;

	public:
		SubscriptionToCourseForm(const std::string& cName, const std::string& sName);
		~SubscriptionToCourseForm() {}
		virtual void execute();
};

#endif
