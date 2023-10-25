/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apprentice.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:21 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 23:39:55 by inwagner         ###   ########.fr       */
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
		Apprentice(int hourlyValue, int schoolHours) : Employee(hourlyValue), schoolHours(schoolHours) {}

		int executeWorkday()
		{
			// Simulate working 7 hours a day with school hours subtracted
			int hoursWorked = 7 - std::min(schoolHours, 7);
			schoolHours = std::max(0, schoolHours - 7);
			return hoursWorked;
		}

		void goSchool(int hours)
		{
			schoolHours += hours;
		}
};

#endif
