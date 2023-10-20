/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:12:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 10:22:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Worker.hpp"

int main()
{
	// Criando
	
	Shovel shovel;
	Hammer hammer;

	Position pos = {5, 6, 7};
	Statistic stat = {42, 84};
	std::vector<Tool*> tls;
	Worker* worker1 = new Worker(pos, stat, tls);
	Worker* worker2 = new Worker(pos, stat, tls);
	
	// Usando a ferramenta
	shovel.use();
	shovel.use();
	hammer.use();
	
	// Acessando o número de usos da pá
	int shovelUses = shovel.getNumberOfUses();
	std::cout << "Número de usos da pá: " << shovelUses << std::endl;

	// Acessando o número de usos do martelo
	int hammerUses = hammer.getNumberOfUses();
	std::cout << "Número de usos do martelo: " << hammerUses << std::endl;

	worker2->addTool(&shovel);
	shovel.use();

	// Acessando o número de usos da pá
	shovelUses = shovel.getNumberOfUses();
	std::cout << "Número de usos da pá: " << shovelUses << std::endl;
	std::cout << "Endereço de shovel: " << worker2->getTool(&shovel) << std::endl;
	
	// Trocando a pá de trabalhador
	worker1->addTool(&shovel);
	std::cout << "Endereço de shovel: " << worker1->getTool(&shovel) << std::endl;
	std::cout << "Endereço de shovel: " << worker2->getTool(&shovel) << std::endl;
	
	













	// Aggregation
	std::cout << "Endereço de worker1: " << worker1->getStat().level << std::endl;
	delete worker1;
	std::cout << "Endereço de worker1: " << worker1->getStat().level << std::endl;
	shovelUses = shovel.getNumberOfUses();

	

	
	



	
	//Shovel* shovelTool = worker1.getToolOfType<Shovel>();
	
	return 0;
}
