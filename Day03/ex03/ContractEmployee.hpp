/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContractEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 14:56:20 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTRACT_EMPLOYEE_HPP
# define CONTRACT_EMPLOYEE_HPP

# include <iostream>
# include "Employee.hpp"

class ContractEmployee : public Employee
{
	private:
		int hoursNotWorked;	//by day
		int hoursWorked;	//total

	public:
		ContractEmployee(int hourlyValue) : Employee(hourlyValue), hoursNotWorked(0), hoursWorked(0) {}

		int executeWorkday()
		{
			int hours = 7 - hoursNotWorked;
			hoursWorked += hours;
			return hours;
		}

		int getWorkedHours() { return hoursWorked; }

		void setVacation(int hours) { hoursNotWorked = hours > 7 ? 7 : hours; }

		void cleanWorkedHours() { hoursWorked = 0; }
};

#endif
