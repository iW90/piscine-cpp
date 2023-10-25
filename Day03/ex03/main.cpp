/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:48:42 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 09:54:35 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Employee.hpp"
#include "EmployeeManager.hpp"
#include "Apprentice.hpp"
#include "ContractEmployee.hpp"
#include "TempWorker.hpp"

int main()
{
	EmployeeManager manager;

	TempWorker tempWorker(10);
	ContractEmployee contractEmployee(10);
	Apprentice apprentice(10);

	manager.addEmployee(&tempWorker);
	manager.addEmployee(&contractEmployee);
	manager.addEmployee(&apprentice);

	contractEmployee.setVacation(0);
	apprentice.goSchool(0);
	
	// Calculate payroll
	manager.calculatePayroll();

	return 0;
}

/*
** c++ -Wall -Wextra -Werror -std=c++98 -I . main.cpp && ./main
*/

/*
** O "Princípio da Segregação de Interfaces" (Interface Segregation Principle - ISP), por Robert C. Martin, 
** e enfatiza a importância de manter interfaces específicas e coesas para as classes.
** Uma classe não deve ser forçada a implementar métodos que ela não usa, deve conter apenas os métodos 
** que são relevantes para as classes que a implementam.
** As interfaces devem ser pequenas e específicas, adaptadas às necessidades das classes que as implementam.
*/