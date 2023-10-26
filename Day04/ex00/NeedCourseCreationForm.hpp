/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:42:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 14:46:28 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEED_COURSE_CREATION_FORM_HPP
# define NEED_COURSE_CREATION_FORM_HPP

# include "Form.hpp"

class NeedCourseCreationForm : public Form
{
	private:
		std::string _name;
		Professor* _responsable;
		int _numberOfClassToGraduate;
		int _maximumNumberOfStudent;

	public:
		NeedCourseCreationForm(FormType _formType, std::string name, Professor* responsable, int numberOfClassToGraduate, int maximumNumberOfStudent)
			: Form(_formType), _name(name), _responsable(responsable), _numberOfClassToGraduate(numberOfClassToGraduate), _maximumNumberOfStudent(maximumNumberOfStudent)
			{
				//verificar se existem ClassRooms livres.
			}
};

#endif
