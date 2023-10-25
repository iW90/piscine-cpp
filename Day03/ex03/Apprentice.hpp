/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apprentice.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:21 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 09:57:09 by inwagner         ###   ########.fr       */
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
		int workDay;

	public:
		Apprentice(int hourlyValue) : Employee(hourlyValue), schoolHours(0), workDay(0) {}

		int executeWorkday()
		{
			int hoursWorked = 7 - schoolHours / 2;
			workDay += hourlyValue;
			return hoursWorked;
		}

		void goSchool(int hours)
		{
			schoolHours = hours;
		}
};

#endif
