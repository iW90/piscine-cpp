/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubscriptionToCourseForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:09:44 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 22:42:15 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBSCRIPTIONTOCOURSEFORM_HPP
# define SUBSCRIPTIONTOCOURSEFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class	SubscriptionToCourseForm : public Form
{
	private:
		std::string	courseName;
		std::string	studentName;

	public:
		SubscriptionToCourseForm(\
		const std::string& cName, const std::string& sName);

		virtual void	execute() override;
};

#endif
