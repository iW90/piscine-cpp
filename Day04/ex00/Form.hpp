/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:41:55 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 00:29:01 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

enum class FormType
{
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse
};

class Form
{
	private:
		FormType	_formType;
		bool		_isSigned;

	public:
		Form(FormType p_formType) : _isSigned(false), _formType(p_formType) {}
		~Form() {}
		virtual void execute() = 0;
		bool		isSigned() { return _isSigned; }
		void		signDocument() { _isSigned = true; }
		FormType	getType() const { return _formType; }
};

#endif
