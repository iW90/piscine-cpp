/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:58:25 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:05:17 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADMASTER_HPP
# define HEADMASTER_HPP

# include <memory>
# include <vector>

# include "Staff.hpp"
# include "Secretary.hpp"

class	Headmaster : public Staff
{
	private:
		std::vector<std::unique_ptr<Form>>	_formToValidate;
		Secretary&	_secretary;
		
	public:
		Headmaster(const std::string& name, Secretary& secretary) : 
		Staff(name), 
		_secretary(secretary)
		{}

		void	receiveForm(std::unique_ptr<Form> p_form)
		{
			_formToValidate.push_back(std::move(p_form));
		}

		void	signLastForm()
		{
			if (!_formToValidate.empty())
			{
				_formToValidate.back()->signDocument();
			}
		}

		void	dispatchAllForms();
};

#endif
