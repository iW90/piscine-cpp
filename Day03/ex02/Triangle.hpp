/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:37 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 19:16:20 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP
# include "shape.hpp"

class Triangle : public Shape
{
	private:
		double side1;
		double side2;
		double side3;
		double base;
		double height;

	public:
		Triangle(double s1, double s2, double s3, double b1, double h1) : side1(s1), side2(s2), side3(s3), base(b1), height(h1) {}
		~Triangle();

		double calculateArea() const
		{
			return (base * height / 2);
		}

		double calculatePerimeter() const
		{
			return side1 + side2 + side3;
		}
};

#endif
