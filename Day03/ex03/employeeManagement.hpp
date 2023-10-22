/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   employeeManagement.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:24:52 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 20:01:04 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_MANAGEMENT_HPP
# define EMPLOYEE_MANAGEMENT_HPP

# include "employee.hpp"
# include <iostream>
# include <vector>

class IEmployeeManager
{
	public:
		virtual void addEmployee(Employee*) = 0;
		virtual void removeEmployee(Employee*) = 0;
		virtual void executeWorkday() = 0;
		virtual void calculatePayroll() = 0;
};

class EmployeeManager : public IEmployeeManager
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
			for (Employee* employee : employees)
				employee->executeWorkday();
		}

		void calculatePayroll()
		{
			std::cout << "Payroll for the last complete month:" << std::endl;
			for (Employee* employee : employees) {
				int payroll = employee->executeWorkday() * 7; // Assuming one workday is 7 hours
				std::cout << "Employee Salary: " << payroll << std::endl;
			}
		}
};

#endif
