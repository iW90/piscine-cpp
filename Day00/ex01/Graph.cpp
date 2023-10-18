/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:17:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 22:12:40 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"

Graph::Graph(Vector2 dimensions) : dimensions(dimensions)
{
	if (dimensions.x < 1 || dimensions.y < 1)
	{
		std::cerr << "Invalid dimensions for the graph." << std::endl;
		std::exit(1);
	}

	grid.resize(static_cast<int>(dimensions.y), std::vector<char>(static_cast<int>(dimensions.x), '.'));
}

void Graph::printGrid() const
{
	for (int y = static_cast<int>(dimensions.y) - 1; y >= 0; y--)
	{
		std::cout << y << ' ';
		for (int x = 0; x < static_cast<int>(dimensions.x); x++)
			std::cout << grid[static_cast<int>(y)][static_cast<int>(x)] << ' ';
		std::cout << std::endl;
	}
	std::cout << ' ' << ' ';
	for (int x = 0; x < static_cast<int>(dimensions.x); x++)
		std::cout << x << ' ';
	std::cout << std::endl;
}

void Graph::placeX(Vector2 p)
{
	int x = static_cast<int>(p.x);
	int y = static_cast<int>(p.y);
	if (x >= 0 && x < static_cast<int>(dimensions.x) && y >= 0 && y < static_cast<int>(dimensions.y))
		grid[static_cast<int>(y)][static_cast<int>(x)] = 'X';
}
