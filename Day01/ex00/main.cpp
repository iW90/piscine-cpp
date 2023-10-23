/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:12:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/23 10:25:39 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Worker.hpp"
#include "Workshop.hpp"

int main()
{
	// Criando
	
	Tool* shovel = new Shovel;
	Tool* hammer = new Hammer;

	Position pos = {5, 6, 7};
	Statistic stat = {42, 84};
	std::vector<Tool*> tls;
	std::vector<Workshop*> wls;
	Worker* worker1 = new Worker(pos, stat, tls, wls);
	Worker* worker2 = new Worker(pos, stat, tls, wls);

	Workshop* workshop1 = new Workshop;
	Workshop* workshop2 = new Workshop;
	
	// Usando a ferramenta
	shovel->use();
	shovel->use();
	hammer->use();
	
	// Acessando o número de usos da pá
	int shovelUses = shovel->getNumberOfUses();
	std::cout << "Número de usos da pá: " << shovelUses << std::endl;

	// Acessando o número de usos do martelo
	int hammerUses = hammer->getNumberOfUses();
	std::cout << "Número de usos do martelo: " << hammerUses << std::endl;

	worker2->addTool(shovel);
	shovel->use();

	// Acessando o número de usos da pá
	shovelUses = shovel->getNumberOfUses();
	std::cout << "Número de usos da pá: " << shovelUses << std::endl;
	std::cout << "Endereço de shovel: " << worker2->getTool(shovel) << std::endl;
	
	// Trocando a pá de trabalhador
	worker1->addTool(shovel);
	std::cout << "Endereço de shovel: " << worker1->getTool(shovel) << std::endl;
	std::cout << "Endereço de shovel: " << worker2->getTool(shovel) << std::endl;

	worker1->removeTool(shovel);
	std::cout << "Endereço de shovel: " << worker1->getTool(shovel) << std::endl;
	
	worker1->addTool(shovel);
	
	Tool* shovelTool = getToolOfType<Shovel>(worker1);
	std::cout << "Endereço de shovel (toolType): " << shovelTool << std::endl;

	workshop1->addWorker(worker1, NONE);
	workshop2->addWorker(worker1, HAMMER);
	



	// Aggregation
	std::cout << "Endereço de worker1: " << worker1->getStat().level << std::endl;
	delete worker1;
	//std::cout << "Endereço de worker1: " << worker1->getStat().level << std::endl;
	shovelUses = shovel->getNumberOfUses();


	delete worker2;
	delete shovel;
	delete hammer;
	delete workshop1;
	delete workshop2;
	

	return 0;
}
