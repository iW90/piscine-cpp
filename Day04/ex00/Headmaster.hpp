/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:59:16 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADMASTER_HPP
# define HEADMASTER_HPP

# include "Staff.hpp"
# include "Bell.hpp"
# include <vector>
# include <memory>

class Form;

class Headmaster : public Staff
{
	private:
		std::vector<std::unique_ptr<Form>>	_formToValidate;
		Bell bell;

		void notifyObservers(bool freeTime)
		{
			for (size_t i = 0; i < observers.size(); ++i)
				observers[i]->update(event);
		}

	public:
		Headmaster(std::string p_name) : Staff(p_name) {}
		~Headmaster() {}
		void receiveForm(std::unique_ptr<Form> p_form) { _formToValidate.push_back(std::move(p_form)); }
		void startFreeTime() { notifyObservers(true); }
		void endFreeTime() { notifyObservers(false); }
		void addObserver(Observer* observer) { bell.addObserver(observer); }
		void ringBell() { bell.ringBell(); }
};

#endif
