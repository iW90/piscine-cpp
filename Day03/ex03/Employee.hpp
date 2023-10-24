/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:26:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 15:28:40 by inwagner         ###   ########.fr       */
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

#endif
