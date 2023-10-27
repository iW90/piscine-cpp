/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:42:28 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 09:12:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEED_MORE_CLASS_ROOM_FORM_HPP
# define NEED_MORE_CLASS_ROOM_FORM_HPP

# include "Form.hpp"
# include <string>

class NeedMoreClassRoomForm : public Form
{
	private:
		std::string	courseName;
		int			currentAttendance;
		int			expectedIncrease;

	public:
		NeedMoreClassRoomForm(const std::string& cName, int current, int expected);
		~NeedMoreClassRoomForm() {}
		virtual void	execute();
};

#endif
