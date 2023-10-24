/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rectangle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:14 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 19:16:03 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP
# include "shape.hpp"

class Rectangle : public Shape
{
	private:
		double width;
		double height;

	public:
		Rectangle(double w, double h) : width(w), height(h) {}
		~Rectangle();

		double calculateArea() const
		{
			return width * height;
		}

		double calculatePerimeter() const
		{
			return 2 * (width + height);
		}
};

#endif
