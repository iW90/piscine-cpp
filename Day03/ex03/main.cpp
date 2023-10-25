/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:48:42 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 09:52:20 by inwagner         ###   ########.fr       */
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

	// Set vacation for ContractEmployee and school hours for Apprentice
	contractEmployee.setVacation(0);
	apprentice.goSchool(0);
	
	// Calculate payroll
	manager.calculatePayroll();

	return 0;
}
/*
int main()
{
	EmployeeManager* manager = new EmployeeManager();

	Employee* employee0 = new HourlyEmployee();
	Employee* employee1 = new SalariedEmployee();
	Employee* employee2 = new TempWorker(160); // 20 days * 8 hours/day
	Employee* employee3 = new ContractEmployee(40); // 5 days * 8 hours/day
	Employee* employee4 = new Apprentice(40, 80); // 5 days at school, 10 days at work

	manager->addEmployee(employee0);
	manager->addEmployee(employee1);
	manager->addEmployee(employee2);
	manager->addEmployee(employee3);
	manager->addEmployee(employee4);

	for (int i = 0; i < 30; i++)
		manager->executeWorkday();

	manager->calculatePayroll();

	// Clean up memory
	delete employee0;
	delete employee1;
	delete employee2;
	delete employee3;
	delete employee4;
	delete manager;

	return (0);
}
*/

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