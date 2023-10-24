/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:15:24 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 12:05:06 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Command.hpp"
#include "PackageReductionDiscountCommand.hpp"
#include "ThuesdayDiscountCommand.hpp"

int main()
{
	// Resources
	std::vector<Article> articles;
    
    Article article1;
    article1.quantity = 3;
    article1.name = "Article1";
    article1.price = 50.0;
    articles.push_back(article1);

    Article article2;
    article2.quantity = 2;
    article2.name = "Article2";
    article2.price = 30.0;
    articles.push_back(article2);

	articles.push_back(article1);
	articles.push_back(article2);

    DayOfWeek tuesday = TUESDAY;
	DayOfWeek sunday = SUNDAY;
	DayOfWeek thursday = THURSDAY;
	
    std::string client1 = "Client1";
	std::string client2 = "Client2";
	std::string client3 = "Client3";


	// Objetos
	Command command(1, thursday, client1, articles);
	ThuesdayDiscountCommand thuesdayCommand(2, tuesday, client2, articles);
	PackageReductionDiscountCommand packageCommand(3, sunday, client3, articles);

	// Cálculo de preços
	double totalPrice = command.get_total_price(); //virtual
	double thuesdayPrice = thuesdayCommand.get_total_price();
	double packagePrice = packageCommand.get_total_price();

	// Visualização dos preços
	std::cout << "Total Price (Command): " << totalPrice << std::endl;
	std::cout << "Total Price (ThuesdayDiscountCommand): " << thuesdayPrice << std::endl;
	std::cout << "Total Price (PackageReductionDiscountCommand): " << packagePrice << std::endl;

	return 0;
}


/*
** c++ -Wall -Wextra -Werror -std=c++98 -I . main.cpp && ./a.out
*/

/*
** "Princípio do Aberto/Fechado" (Open/Closed Principle - OCP), por Bertrand Meyer.
** Este princípio estabelece que as entidades de software (como classes, módulos e funções) 
** devem ser abertas para extensão, mas fechadas para modificação.
** Isso é geralmente alcançado através da utilização de herança, interfaces e polimorfismo.
** Em vez de modificar uma classe existente para adicionar novos comportamentos, você deve 
** criar novas classes que estendem a funcionalidade da classe existente.
*/