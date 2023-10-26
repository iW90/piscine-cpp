/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:10:52 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 09:22:50 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton
{
	private:
		static Singleton* instance;
		Singleton() {}

	public:
		static Singleton& getInstance();
		~Singleton();
};

#endif

//Singleton.cpp
//#include "Singleton.hpp"
#include <iostream>

Singleton* Singleton::instance = NULL;

Singleton& Singleton::getInstance()
{
	if (!instance)
		instance = new Singleton;
	return *instance;
}

Singleton::~Singleton()
{
	delete instance;
}
