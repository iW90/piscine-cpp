/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:17:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 17:58:49 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"

Graph::Graph(Vector2 size) : size(size)
{
	if (size.x < 1 || size.y < 1 || size.x > I_MAX || size.y > I_MAX)
	{
		std::cerr << "Invalid size for the graph." << std::endl;
		std::exit(1);
	}
	grid.resize(static_cast<int>(size.y), std::vector<char>(static_cast<int>(size.x), '.'));
}

const Vector2& Graph::getSize() const
{
	return size;
}

void Graph::printGrid() const
{
	int numWidth = 2;

	for (int y = static_cast<int>(size.y) - 1; y >= 0; y--)
	{
		std::cout << std::setw(numWidth) << y;
		for (int x = 0; x < static_cast<int>(size.x); x++)
			std::cout << std::setw(numWidth) << grid[static_cast<int>(y)][static_cast<int>(x)] << ' ';
		std::cout << std::endl;
	}
	std::cout << std::setw(numWidth) << ' ';
	for (int x = 0; x < static_cast<int>(size.x); x++)
		std::cout << std::setw(numWidth) << x << " ";
	std::cout << std::endl;
	std::cout << "\n" << std::endl;
}
/*
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
	std::cout << "\n" << std::endl;
}
*/

void Graph::putX(Vector2 p)
{
	int x = static_cast<int>(p.x);
	int y = static_cast<int>(p.y);
	if (x >= 0 && x < static_cast<int>(size.x) && y >= 0 && y < static_cast<int>(size.y))
		grid[y][x] = 'X';
	else
		std::cerr << "Coordinates (" << x << ", " << y << ") are out of bounds." << std::endl;
}
