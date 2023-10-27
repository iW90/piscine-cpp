/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:09:44 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 22:39:22 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COURSEFINISHEDFORM_HPP
# define COURSEFINISHEDFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class	CourseFinishedForm : public Form
{
	private:
		std::string	courseName;
		std::string	studentName;
		int			finalGrade;
		int			yearOfCompletion;

	public:
		CourseFinishedForm(const std::string& cName, \
		const std::string& sName, int grade, int year);

		virtual void	execute() override;
};

#endif
