/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:09:44 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 22:41:35 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEEDCOURSECREATIONFORM_HPP
# define NEEDCOURSECREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class	NeedCourseCreationForm : public Form
{
	private:
		std::string	courseName;
		int			semesterDuration;
		int			maximumAttendance;

	public:
		NeedCourseCreationForm(\
		const std::string& cName, int duration, int attendance);

		virtual void	execute() override;
};

#endif
