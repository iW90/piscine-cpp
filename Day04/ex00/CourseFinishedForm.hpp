/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:42:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 22:32:21 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COURSE_FINISHED_FORM_HPP
# define COURSE_FINISHED_FORM_HPP

# include "Form.hpp"
# include <string>
# include <iostream>

class CourseFinishedForm : public Form
{
	private:
		std::string	courseName;
		std::string	studentName;
		int			finalGrade;
		int			yearOfCompletion;

	public:
		CourseFinishedForm(const std::string& cName, const std::string& sName, int grade, int year);
		~CourseFinishedForm() {}
		virtual void execute();
};

#endif