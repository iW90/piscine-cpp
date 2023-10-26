/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:42:28 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:33:41 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEED_MORE_CLASS_ROOM_FORM_HPP
# define NEED_MORE_CLASS_ROOM_FORM_HPP

# include "Form.hpp"

class NeedMoreClassRoomForm : public Form
{
	private:

	public:
		NeedMoreClassRoomForm(FormType _formType) : Form(_formType) {}
		~NeedMoreClassRoomForm() {}
		void execute();
};

#endif
