/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:51:26 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:52:55 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headmaster.hpp"
#include "Student.hpp"
#include "Professor.hpp"

int main()
{
	// Crie um Headmaster
	Headmaster headmaster("Director");

	// Crie alguns Students
	Student student1("Alice");
	Student student2("Bob");

	// Crie um Professor
	Professor professor("Prof. Smith");

	// Adicione os observadores ao Headmaster
	headmaster.addObserver(&student1);
	headmaster.addObserver(&student2);
	headmaster.addObserver(&professor);

	// Tocar o sino para iniciar o tempo livre
	headmaster.ringBell();
	headmaster.startFreeTime();

	// Tocar o sino para encerrar o tempo livre
	headmaster.ringBell();
	headmaster.endFreeTime();

	return 0;
}
