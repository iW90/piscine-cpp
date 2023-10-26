/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 09:09:18 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADMASTER_HPP
# define HEADMASTER_HPP

# include "Staff.hpp"
# include <vector>

class Form;

class Headmaster : public Staff
{
	private:
		std::vector<Form*> _formToValidate;

	public:
		void receiveForm(Form* p_form);
};

#endif
