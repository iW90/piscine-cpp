/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TempWorker.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:27:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 12:17:59 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_WORKER_HPP
# define TEMP_WORKER_HPP

# include "Employee.hpp"
# include <iostream>

class TempWorker : public Employee
{
	private:
		int hoursWorked;
		int mobilized;

	public:
		TempWorker(int hourlyValue) : Employee(hourlyValue), hoursWorked(0) {}

		int executeWorkday() 
		{
			int hours = mobilized < 7 ? mobilized : 7;
			hoursWorked += hours;
			return hours;
		}

		int getWorkedHours() { return hoursWorked; }

		void mobilize(int hours) { mobilized = hours; }
};

#endif
