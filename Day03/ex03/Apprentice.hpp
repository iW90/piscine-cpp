/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apprentice.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:21 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 12:00:59 by inwagner         ###   ########.fr       */
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
		int hoursWorked;

	public:
		Apprentice(int hourlyValue) : Employee(hourlyValue), schoolHours(0), hoursWorked(0) {}

		int executeWorkday()
		{
			int hours = 7 - schoolHours / 2;
			hoursWorked += hours;
			return hours;
		}

		int getWorkedHours() { return hoursWorked; }

		void goSchool(int hours) { schoolHours = hours; }
};

#endif
