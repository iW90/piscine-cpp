/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:06:17 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 10:36:04 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

enum class	FormType
{
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse
};

class	CourseFinished;
class	NeedMoreClassRoom;
class	NeedCourseCreation;
class	SubscriptionToCourse;

class	Form
{
	private:
		bool		_isSigned;
		FormType	_formType;

	public:
		virtual ~Form() = default;
		virtual void	execute() = 0;

		Form(FormType p_formType) : _isSigned(false), _formType(p_formType) {}

		bool		isSigned() { return _isSigned; }
		void		signDocument() { _isSigned = true; }
		FormType	getType() const { return _formType; }
};

#endif
