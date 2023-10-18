/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:44:25 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/18 16:00:51 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"
#include "main.hpp"

int main()
{
	int		x, y;
	
	std::cout << "Enter the dimensions (x and y): ";
	std::cin >> x >> y;

	Vector2 dimensions = {static_cast<float>(x), static_cast<float>(y)};
	Graph graph(dimensions);
	graph.printGrid();

	std::cout << "\n" << std::endl;

	// Colocar coordenadas
	Vector2 newVector = {12, 3.0};
	graph.putX(newVector);
	graph.printGrid();

	return 0;
}
