/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apprentice.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:21 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 09:52:01 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APPRENTICE_HPP
# define APPRENTICE_HPP

# include <iostream>
# include "Employee.hpp"

class Apprentice : public Employee
{
	private:
		int schoolHours;

	public:
		Apprentice(int hourlyValue) : Employee(hourlyValue), schoolHours(0) {}

		int executeWorkday()
		{
			int hoursWorked = 7 - schoolHours / 2;
			return hoursWorked;
		}

		void goSchool(int hours)
		{
			schoolHours = hours;
		}
};

#endif
