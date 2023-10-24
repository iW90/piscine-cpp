/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hourlyEmployee.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:27:30 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 12:07:21 by inwagner         ###   ########.fr       */
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
		~HourlyEmployee() {};
};

#endif
