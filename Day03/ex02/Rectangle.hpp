/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rectangle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:14 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 21:20:33 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP
# include "Shape.hpp"

class Rectangle : public Shape
{
	private:
		double width;
		double height;

	public:
		Rectangle(double w, double h) : width(w), height(h) {}
		~Rectangle() {}

		double getArea() const
		{
			return width * height;
		}

		double getPerimeter() const
		{
			return 2 * (width + height);
		}
};

#endif
