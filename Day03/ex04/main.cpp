/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:51:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 22:50:27 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "ILogger.hpp"
#include "FileLogger.hpp"
#include "StreamLogger.hpp"

int main()
{
	// Instâncias
	FileLogger fileLogger1("log1.txt", "File Logger: ");
	FileLogger fileLogger2("log2.txt");
	StreamLogger consoleLogger1(std::cout, "Console Logger: ");
	StreamLogger consoleLogger2(std::cout, "Console Logger: ", true);

	// Vetor de ILogger*
	std::vector<ILogger*> loggers;
	loggers.push_back(&fileLogger1);
	loggers.push_back(&fileLogger2);
	loggers.push_back(&consoleLogger1);
	loggers.push_back(&consoleLogger2);

	// Crie uma lista de mensagens para registrar
	const char* messages[] = {"Message 1", "Message 2", "Message 3"};

	// Itere pelas mensagens e registre-as em todos os loggers
	for (size_t i = 0; i < sizeof(messages) / sizeof(messages[0]); i++)
		for (size_t j = 0; j < loggers.size(); j++)
			loggers[j]->write(messages[i]);

	return (0);
}

/*
** c++ -Wall -Wextra -Werror -std=c++98 -I . main.cpp && ./a.out
*/

/*
** "Princípio da Inversão de Dependência" (Dependency Inversion Principle - DIP), por Robert C. Martin.
** Isso significa que, em vez de classes de alto nível dependerem diretamente de classes de baixo nível, 
** ambas devem depender de interfaces ou abstrações. 
** Abstrações não devem depender de detalhes. Detalhes devem depender de abstrações.
** As classes concretas que implementam as interfaces ou abstrações podem ser trocadas sem afetar as classes de alto nível.
*/