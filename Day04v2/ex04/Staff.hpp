/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Staff.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:37:25 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:50:30 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STAFF_HPP
# define STAFF_HPP

# include "Person.hpp"
# include "Form.hpp"
# include <memory>

class	Staff : public Person
{
	private:

	public:
		Staff() : Person("") {}
		Staff(const std::string& name) : Person(name) {}

		void	sign(std::unique_ptr<Form> p_form)
		{
			p_form->signDocument();
		}
};

#endif
