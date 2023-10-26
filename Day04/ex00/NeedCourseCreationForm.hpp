/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedCourseCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:42:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:33:31 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEED_COURSE_CREATION_FORM_HPP
# define NEED_COURSE_CREATION_FORM_HPP

# include "Form.hpp"

class NeedCourseCreationForm : public Form
{
	private:

	public:
		NeedCourseCreationForm(FormType _formType) : Form(_formType) {}
		~NeedCourseCreationForm() {}
		void execute();
};

#endif
