/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:26:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 23:44:23 by inwagner         ###   ########.fr       */
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
};

#endif
