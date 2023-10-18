/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:17:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/18 09:48:19 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"

Graph::Graph(Vector2 size) : size(size)
{
	if (size.x < 1 || size.y < 1)
	{
		std::cerr << "Invalid size for the graph." << std::endl;
		std::exit(1);
	}
	grid.resize(static_cast<int>(size.y), std::vector<char>(static_cast<int>(size.x), '.'));
}

void Graph::printGrid() const
{
	for (int y = static_cast<int>(size.y) - 1; y >= 0; y--)
	{
		std::cout << y << ' ';
		for (int x = 0; x < static_cast<int>(size.x); x++)
			std::cout << grid[static_cast<int>(y)][static_cast<int>(x)] << ' ';
		std::cout << std::endl;
	}
	std::cout << ' ' << ' ';
	for (int x = 0; x < static_cast<int>(size.x); x++)
		std::cout << x << ' ';
	std::cout << std::endl;
}

void Graph::putX(Vector2 p)
{
	int x = static_cast<int>(p.x);
	int y = static_cast<int>(p.y);
	if (x >= 0 && x < static_cast<int>(size.x) && y >= 0 && y < static_cast<int>(size.y))
		grid[static_cast<int>(y)][static_cast<int>(x)] = 'X';
}
