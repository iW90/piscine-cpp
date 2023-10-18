/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:16:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/18 16:17:28 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_HPP
#define GRAPH_HPP

# include <vector>
# include <iostream>
# include <cstdlib>

# define I_MAX 2147483647.0

struct Vector2
{
	float x;
	float y;
};

class Graph
{
	private:
		//attributes
		Vector2	size;
		std::vector<std::vector<char> > grid;

	public:
		//getters
		void	printGrid() const;

		//methods
		void	putX(Vector2 p);

		//constructor
		Graph(Vector2 size);
};

#endif
