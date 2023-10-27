/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:09:44 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 22:41:56 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEEDMORECLASSROOMFORM_HPP
# define NEEDMORECLASSROOMFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class	NeedMoreClassRoomForm : public Form
{
	private:
		std::string	courseName;
		int			currentAttendance;
		int			expectedIncrease;

	public:
		NeedMoreClassRoomForm(\
		const std::string& cName, int current, int expected);

		virtual void	execute() override;
};

#endif
