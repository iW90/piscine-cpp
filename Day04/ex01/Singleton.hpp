/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:47:11 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 08:59:00 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Singleton
{
	private:
		static Singleton* instance;
		Singleton() {}

	public:
		static Singleton& getInstance()
		{
			if (!instance)
				instance = new Singleton;
			return *instance;
		}

		~Singleton()
		{
			delete instance;
		}
};
