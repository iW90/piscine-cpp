/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:05:25 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 21:20:23 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCLE_HPP
# define CIRCLE_HPP
# include "Shape.hpp"

class Circle : public Shape
{
	private:
		double radius;

	public:
		Circle(double r) : radius(r) {}
		~Circle() {}

		double getArea() const
		{
			return 3.14 * radius * radius; // Aproximação de pi
		}

		double getPerimeter() const
		{
			return 2 * 3.14 * radius; // Aproximação de pi
		}
};

#endif
