/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:46:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 21:20:54 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"
#include <iostream>

int main()
{
	Rectangle rectangle(5.0, 3.0);
	Triangle triangle(3.0, 4.0, 5.0, 6.0, 8.0);
	Circle circle(2.0);

	Shape* shapes[] = {&rectangle, &triangle, &circle};

	for (int i = 0; i < 3; i++)
		std::cout << "Shape " << i + 1 << " - Area: " << shapes[i]->getArea() << ", Perimeter: " << shapes[i]->getPerimeter() << std::endl;

	return (0);
}

/*
** c++ -Wall -Wextra -Werror -std=c++98 -I . main.cpp && ./a.out
*/

/*
** "Princípio da Substituição de Liskov" (Liskov Substitution Principle - LSP), por Barbara Liskov.
** Os objetos de uma subclasse devem ser substituíveis por objetos da classe base (superclasse) 
** sem afetar a integridade do programa. Isso significa que uma subclasse deve herdar e respeitar 
** o comportamento da classe base, sem alterar as propriedades e invariâncias da classe base.
** Em termos mais simples, se uma classe B é uma subclasse de uma classe A, então os objetos da 
** classe B devem poder ser usados onde objetos da classe A são esperados, sem causar problemas 
** no funcionamento do programa.
*/