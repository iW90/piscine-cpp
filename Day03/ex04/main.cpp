/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:51:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 20:47:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "ILogger.hpp"
#include "FileLogger.hpp"
#include "StreamLogger.hpp"

int main()
{
	// Crie instâncias de diferentes tipos de loggers
	FileLogger fileLogger("log.txt", "File Logger: ");
	StreamLogger consoleLogger(std::cout, "Console Logger: ");

	// Crie um vetor de ILogger*
	std::vector<ILogger*> loggers;
	loggers.push_back(&fileLogger);
	loggers.push_back(&consoleLogger);

	// Crie uma lista de mensagens para registrar
	const char* messages[] = {"Message 1", "Message 2", "Message 3"};

	// Itere pelas mensagens e registre-as em todos os loggers
	for (size_t i = 0; i < sizeof(messages) / sizeof(messages[0]); i++)
		for (size_t j = 0; j < loggers.size(); j++)
			loggers[j]->write(messages[i]);

	return (0);
}



/*
** g++ -std=c++98 main.cpp && ./main
*/

/*
** "Princípio da Inversão de Dependência" (Dependency Inversion Principle - DIP), por Robert C. Martin.
** Isso significa que, em vez de classes de alto nível dependerem diretamente de classes de baixo nível, 
** ambas devem depender de interfaces ou abstrações. 
** Abstrações não devem depender de detalhes. Detalhes devem depender de abstrações.
** As classes concretas que implementam as interfaces ou abstrações podem ser trocadas sem afetar as classes de alto nível.
*/