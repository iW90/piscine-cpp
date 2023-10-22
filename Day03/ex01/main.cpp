/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:15:24 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 20:32:27 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Command.hpp"
#include "PackageReductionDiscountCommand.hpp"
#include "ThuesdayDiscountCommand.hpp"

int main()
{
	std::vector<std::pair<int, std::string> > articles = {{2, "item1"}, {3, "item2"}};
	Date tuesday_date = {22, 10, 2023};
	Date other_date = {23, 10, 2023};

	Command* regular = new Command(1, Date{22, 10, 2023}, "Cliente1", articles);
	Command* thuesdayDiscount = new ThuesdayDiscountCommand(1, tuesday_date, "Client2", articles);
	Command* packageDiscount = new PackageReductionDiscountCommand(2, other_date, "Client3", articles);

	// Cálculo do preço total para cada comando
	double priceRegular = regular->get_total_price();
	double pricePackageDiscount = packageDiscount->get_total_price();
	double pricethuesdayDiscount = thuesdayDiscount->get_total_price();

	std::cout << "Total Price with Regular: " << regular->get_total_price() << " euros" << std::endl;
	std::cout << "Total Price with Tuesday Discount: " << thuesdayDiscount->get_total_price() << " euros" << std::endl;
	std::cout << "Total Price with Package Reduction Discount: " << packageDiscount->get_total_price() << " euros" << std::endl;

	delete regular;
	delete thuesdayDiscount;
	delete packageDiscount;

	return (0);
}

/*
** g++ -std=c++98 main.cpp && ./main
*/

/*
** "Princípio do Aberto/Fechado" (Open/Closed Principle - OCP), por Bertrand Meyer.
** Este princípio estabelece que as entidades de software (como classes, módulos e funções) 
** devem ser abertas para extensão, mas fechadas para modificação.
** Isso é geralmente alcançado através da utilização de herança, interfaces e polimorfismo.
** Em vez de modificar uma classe existente para adicionar novos comportamentos, você deve 
** criar novas classes que estendem a funcionalidade da classe existente.
*/