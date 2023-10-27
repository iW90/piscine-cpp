/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:42:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 09:10:40 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEED_COURSE_CREATION_FORM_HPP
# define NEED_COURSE_CREATION_FORM_HPP

# include "Form.hpp"
# include <string>

class Professor;

class NeedCourseCreationForm : public Form
{
	private:
		std::string _name;
		Professor* _responsable;
		int _numberOfClassToGraduate;
		int _maximumNumberOfStudent;

	public:
		NeedCourseCreationForm(std::string name, int numberOfClassToGraduate, int maximumNumberOfStudent);
		virtual void	execute();
};

#endif
