/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EmployeeManager.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:24:52 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 09:31:13 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_MANAGER_HPP
# define EMPLOYEE_MANAGER_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <Employee.hpp>

class Employee;

class EmployeeManager
{
	private:
		std::vector<Employee*> employees;

	public:
		void addEmployee(Employee* employee)
		{
			employees.push_back(employee);
		}

		void removeEmployee(Employee* employee)
		{
			employees.erase(std::remove(employees.begin(), employees.end(), employee), employees.end());
		}

		void executeWorkday()
		{
			for (size_t i = 0; i < employees.size(); ++i)
			{
				Employee* employee = employees[i];
				employee->executeWorkday();
			}
		}

		void calculatePayroll()
		{
			for (size_t i = 0; i < employees.size(); ++i)
			{
				Employee* employee = employees[i];
				int totalPayment = employee->executeWorkday() * 7 * 4; // 7 hours a day for 4 weeks
				std::cout << "Employee with hourly value $" << employee->getHourlyValue()
						<< " earned $" << totalPayment << " in the last month." << std::endl;
			}
		}
};


#endif
