/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 15:44:41 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADMASTER_HPP
# define HEADMASTER_HPP

# include "Staff.hpp"
# include <vector>

enum class Event
{
	RingBell
};

class Form;

class Headmaster : public Staff
{
	private:
		std::vector<Form*> _formToValidate;

	public:
		Headmaster(std::string p_name) : Staff(p_name) {}
		~Headmaster() {}
		void receiveForm(Form* p_form);
};

#endif
