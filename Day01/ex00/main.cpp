/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:50:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 09:13:16 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	Position pos; // Crie uma instância de Position
	Statistic stats; // Crie uma instância de Statistic

	// Create workers
	Worker worker1(pos, stats);
	Worker worker2(pos, stats);
	Worker worker3(pos, stats);

	// Create tools
	Shovel shovel1(10);
	Hammer hammer1(20);

	// Add tools to workers
	worker1.addTool(&shovel1);
	worker2.addTool(&hammer1);

	// Create a workshop that requires a shovel
	Workshop workshop1;
	workshop1.registerWorker(&worker1, "Shovel");

	// Create another workshop that requires a hammer
	Workshop workshop2;
	workshop2.registerWorker(&worker2, "Hammer");

	// Try to register worker3 in workshop1 (worker3 doesn't have the required tool)
	workshop1.registerWorker(&worker3, "Shovel");

	// Execute work for the workshops
	workshop1.executeWorkDay();
	workshop2.executeWorkDay();

	// Release workers from workshops
	workshop1.releaseWorker(&worker1);
	workshop2.releaseWorker(&worker2);

	return 0;
}
