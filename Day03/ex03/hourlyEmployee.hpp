/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hourlyEmployee.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:27:30 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 20:17:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOURLY_EMPLOYEE_HPP
# define HOURLY_EMPLOYEE_HPP

# include "employee.hpp"

class HourlyEmployee : public Employee
{
	public:
		int executeWorkday();

		HourlyEmployee() {};
		~HourlyEmployee();
};

#endif