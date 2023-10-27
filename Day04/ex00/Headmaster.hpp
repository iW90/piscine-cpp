/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 00:47:19 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADMASTER_HPP
# define HEADMASTER_HPP

# include "Staff.hpp"
# include "Bell.hpp"
# include "Secretary.hpp"
# include <vector>
# include <memory>

class Form;
class Observer;

class Headmaster : public Staff
{
	private:
		std::vector<std::unique_ptr<Form>>	_formToValidate;
		Secretary&	_secretary;
		Bell bell;

	public:
		Headmaster(std::string p_name, Secretary& secretary) : Staff(p_name), _secretary(secretary) {}
		~Headmaster() {}
		void receiveForm(std::unique_ptr<Form> p_form) { _formToValidate.push_back(std::move(p_form)); }
		void signLastForm();
		void dispatchLastForm();
		void ringBell() { bell.notifyObservers(Event::RingBell); }
		void addObserver(Observer* observer) { bell.addObserver(observer); }
};

#endif
