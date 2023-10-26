/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:10:52 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 12:08:07 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLETON_HPP
#define SINGLETON_HPP

template <class T>
class Singleton
{
	protected:
		static T* item;
		Singleton() {}

	public:
		static T& getItem();
		virtual ~Singleton();
};

// Templates
template <class T>
T* Singleton<T>::item = 0;

template <class T>
T& Singleton<T>::getItem()
{
	if (!item)
		item = new T;
	return *item;
}

template <class T>
Singleton<T>::~Singleton()
{
	if (item)
	{
		delete item;
		item = NULL;
	}
}

#endif
