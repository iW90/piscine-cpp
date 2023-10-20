/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:12:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/20 09:29:24 by inwagner         ###   ########.fr       */
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

	Position pos = {0, 0, 0};
	Statistic stat = {0, 0};
	std::vector<Tool*> tls;
	Worker worker1(pos, stat, tls);
	Worker worker2(pos, stat, tls);
	
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

	worker2.addTool(&shovel);
	shovel.use();

	// Acessando o número de usos da pá
	shovelUses = shovel.getNumberOfUses();
	std::cout << "Número de usos da pá: " << shovelUses << std::endl;




	
	//Shovel* shovelTool = worker1.getToolOfType<Shovel>();
	
	return 0;
}
