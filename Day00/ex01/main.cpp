/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:44:25 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 18:05:06 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"

int main()
{
	int		x, y;
	
	std::cout << "Enter the dimensions (x and y):\n";
	std::cin >> x >> y;

	Vector2 dimensions = {static_cast<float>(x), static_cast<float>(y)};
	Graph graph(dimensions);

	// Acessar o tamanho do gráfico
	const Vector2& size = graph.getSize();
	std::cout << "Graph size: (" << size.x << ", " << size.y << ")\n\n";

	// Imprimir gráfico vazio
	graph.printGrid();

	// Colocar coordenadas
	Vector2 newVector = {12, 3.0};
	graph.putX(newVector);
	graph.printGrid();

	return 0;
}
