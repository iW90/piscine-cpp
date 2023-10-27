/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:51:26 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 00:48:18 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headmaster.hpp"
#include "Student.hpp"
#include "Professor.hpp"

int main()
{
	// Crie um Headmaster
	Secretary secretary("Sonia");
	Headmaster headmaster("Director", secretary);

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

	return 0;
}
