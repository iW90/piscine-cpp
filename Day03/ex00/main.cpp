/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:35:10 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 20:51:10 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Car.hpp"
#include <iostream>

int main()
{
	// Criando um carro
	Car fusca;

	// Iniciando o motor
	fusca.getEngine().start();

	// Acelerando o carro
	fusca.getEngine().accelerate(60);
	std::cout << "Speed: " << fusca.getEngine().getSpeed() << " km/h" << std::endl;

	// Trocando de marcha
	fusca.getTransmission().shiftUp();
	std::cout << "Current Gear: " << fusca.getTransmission().getCurrentGear() << std::endl;

	// Virando o volante
	fusca.getSteering().turn(30);
	std::cout << "Wheel Angle: " << fusca.getSteering().getWheelAngle() << " degrees" << std::endl;

	// Aplicando força nos freios
	fusca.getBrakes().applyForce(30);
	std::cout << "Brake Force Applied: " << fusca.getBrakes().getForceApplied() << " N" << std::endl;

	// Parando o motor e aplicando freios de emergência
	fusca.getEngine().stop();
	fusca.getBrakes().applyEmergency();

	return (0);
}

/*
** c++ -Wall -Wextra -Werror -std=c++98 -I . main.cpp && ./main
*/

/*
** "Princípio da Responsabilidade Única" (Single Responsibility Principle - SRP), 
** por Robert C. Martin. O SRP ** estipula que uma classe deve ter apenas uma única responsabilidade.
** O Princípio da Responsabilidade Única sugere que você deve dividir o seu código 
** em classes pequenas e bem definidas, cada uma delas focada em uma única tarefa ou 
** responsabilidade.
*/
