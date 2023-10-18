/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:16:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 22:12:18 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_HPP
#define GRAPH_HPP

# include <vector>
# include <iostream>
# include <cstdlib>

struct Vector2
{
	float x;
	float y;
};

class Graph
{
	private:
		Vector2	dimensions;
		std::vector<std::vector<char> > grid;

	public:
		void	printGrid() const;
		void	placeX(Vector2 p);
		Graph(Vector2 dimensions);
};

#endif
