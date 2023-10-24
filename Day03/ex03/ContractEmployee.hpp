/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContractEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 15:29:35 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTRACT_EMPLOYEE_HPP
# define CONTRACT_EMPLOYEE_HPP

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

#endif
