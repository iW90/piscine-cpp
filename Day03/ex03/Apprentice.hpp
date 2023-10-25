/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apprentice.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:21 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 14:04:39 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APPRENTICE_HPP
# define APPRENTICE_HPP

# include <iostream>
# include "Employee.hpp"

class Apprentice : public Employee
{
	private:
		int schoolHours;	//by day
		int hoursNotWorked;	//by day
		int hoursWorked;	//total

	public:
		Apprentice(int hourlyValue) : Employee(hourlyValue), schoolHours(0), hoursWorked(0) {}

		int executeWorkday()
		{
			int hours = 7 - schoolHours / 2 - hoursNotWorked;
			hoursWorked += hours;
			return hours;
		}

		int getWorkedHours() { return hoursWorked; }

		void goSchool(int hours) { schoolHours = hours > 3 ? 3 : hours; }

		void setVacation(int hours) { hoursNotWorked = hours > 4 ? 4 : hours; }
};

#endif
