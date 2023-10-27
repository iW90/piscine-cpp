/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 22:34:07 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADMASTER_HPP
# define HEADMASTER_HPP

# include "Staff.hpp"
# include <vector>
# include <memory>

enum class Event
{
	RingBell
};

class Form;

class Headmaster : public Staff
{
	private:
		std::vector<std::unique_ptr<Form>>	_formToValidate;

	public:
		Headmaster(std::string p_name) : Staff(p_name) {}
		~Headmaster() {}
		void	receiveForm(std::unique_ptr<Form> p_form)
		{
			_formToValidate.push_back(std::move(p_form));
		}
};

#endif
