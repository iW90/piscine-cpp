/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContractEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 09:47:53 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTRACT_EMPLOYEE_HPP
# define CONTRACT_EMPLOYEE_HPP

# include <iostream>
# include "Employee.hpp"

class ContractEmployee : public Employee
{
	private:
		int hoursNotWorked;

	public:
		ContractEmployee(int hourlyValue) : Employee(hourlyValue), hoursNotWorked(0) {}

		int executeWorkday()
		{
			int hoursWorked = 7 - hoursNotWorked;
			return hoursWorked;
		}

		void setVacation(int hours)
		{
			hoursNotWorked = hours;
		}
};

#endif
