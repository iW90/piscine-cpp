/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:03:47 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 21:20:12 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_HPP
# define SHAPE_HPP

class Shape
{
	public:
			virtual double getArea() const = 0;
			virtual double getPerimeter() const = 0;
};

#endif
