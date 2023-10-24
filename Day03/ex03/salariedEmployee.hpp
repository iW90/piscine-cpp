/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salariedEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:27:42 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 12:07:29 by inwagner         ###   ########.fr       */
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
		~SalariedEmployee() {};
};

#endif
