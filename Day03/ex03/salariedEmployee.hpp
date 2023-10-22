/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salariedEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:27:42 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 20:16:33 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SALARIED_EMPLOYEE_HPP
# define SALARIED_EMPLOYEE_HPP

# include "employee.hpp"

class SalariedEmployee : public Employee
{
	public:
		int executeWorkday();

		SalariedEmployee() {};
		~SalariedEmployee();
};

#endif
