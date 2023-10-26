/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Staff.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:41:01 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:34:42 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STAFF_HPP
# define STAFF_HPP

# include "Person.hpp"

class Form;

class Staff : public Person
{
	public:
		Staff(std::string p_name) : Person(p_name) {}
		~Staff() {}
		void sign(Form* p_form);
};

#endif
