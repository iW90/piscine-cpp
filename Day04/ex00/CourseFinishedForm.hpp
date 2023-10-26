/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseFinishedForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:42:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:33:16 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COURSE_FINISHED_FORM_HPP
# define COURSE_FINISHED_FORM_HPP

# include "Form.hpp"

class CourseFinishedForm : public Form
{
	private:

	public:
		CourseFinishedForm(FormType _formType) : Form(_formType) {}
		~CourseFinishedForm() {}
		void execute();
};

#endif