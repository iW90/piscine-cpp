/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:26:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 12:15:11 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_HPP
# define EMPLOYEE_HPP

/*
** Base class for all employees:
*/
class Employee
{
	private:
		int hourlyValue;

	public:
		virtual int executeWorkday() = 0;

		Employee(int hourlyValue) : hourlyValue(hourlyValue) {}
		~Employee() {};
		int getHourlyValue() const { return hourlyValue; }
		void setHourlyValue(int hv) { hourlyValue = hv; };
};

/*
** Another Employee derived classes:
*/
class Apprentice : public Employee
{
	private:
		int schoolHours;
		int workHours;

	public:
		int executeWorkday();
		void logSchoolHours(int hours);

		Apprentice() : Employee(0), schoolHours(0), workHours(0) {}
		~Apprentice();
};

class ContractEmployee : public Employee
{
	private:
		int vacationHours;

	public:
		int executeWorkday();
		void logVacationHours(int hours);
		
		ContractEmployee(int hours) : Employee(0), vacationHours(hours) {}
		~ContractEmployee();
};

class TempWorker : public Employee
{
	private:
		int totalWorkHours;

	public:
		int executeWorkday();
		void logWorkHours(int hours);

		TempWorker(int hours) : Employee(0), totalWorkHours(hours) {}
		~TempWorker();
};

#endif
