/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:26:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 11:08:05 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_HPP
# define EMPLOYEE_HPP

/*
** Base class for all employees:
*/
class Employee
{
	protected:
		int hourlyValue;

	public:
		Employee(int hourlyValue) : hourlyValue(hourlyValue) {}
		virtual int executeWorkday() = 0;
		
		int getHourlyValue() const { return hourlyValue; }
		void setHourlyValue(int hv) { hourlyValue = hv; };
		virtual int getWorkedHours() = 0;
};

#endif
