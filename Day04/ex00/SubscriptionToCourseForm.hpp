/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:43:15 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:33:50 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBSCRIPTION_TO_COURSE_FORM_HPP
# define SUBSCRIPTION_TO_COURSE_FORM_HPP

# include "Form.hpp"

class SubscriptionToCourseForm : public Form
{
	private:

	public:
		SubscriptionToCourseForm(FormType _formType) : Form(_formType) {}
		~SubscriptionToCourseForm() {}
		void execute();
};

#endif
