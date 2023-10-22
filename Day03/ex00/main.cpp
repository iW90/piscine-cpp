/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:35:10 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 20:32:42 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Car.hpp"
#include <iostream>

int main()
{
	// Criando um carro
	Car myCar;

	// Iniciando o motor
	myCar.getEngine().start();

	// Acelerando o carro
	myCar.getEngine().accelerate(60);
	std::cout << "Speed: " << myCar.getEngine().getSpeed() << " km/h" << std::endl;

	// Trocando de marcha
	myCar.getTransmission().shiftUp();
	std::cout << "Current Gear: " << myCar.getTransmission().getCurrentGear() << std::endl;

	// Virando o volante
	myCar.getSteering().turn(30);
	std::cout << "Wheel Angle: " << myCar.getSteering().getWheelAngle() << " degrees" << std::endl;

	// Aplicando força nos freios
	myCar.getBrakes().applyForce(30);
	std::cout << "Brake Force Applied: " << myCar.getBrakes().getForceApplied() << " N" << std::endl;

	// Parando o motor e aplicando freios de emergência
	myCar.getEngine().stop();
	myCar.getBrakes().applyEmergency();

	return (0);
}

/*
** g++ -std=c++98 main.cpp && ./main
*/

/*
** "Princípio da Responsabilidade Única" (Single Responsibility Principle - SRP), 
** por Robert C. Martin. O SRP ** estipula que uma classe deve ter apenas uma única responsabilidade.
** O Princípio da Responsabilidade Única sugere que você deve dividir o seu código 
** em classes pequenas e bem definidas, cada uma delas focada em uma única tarefa ou 
** responsabilidade.
*/
