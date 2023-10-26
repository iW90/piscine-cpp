/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchoolLists.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:44:31 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 10:48:32 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SchoolLists.hpp"

template <class T>
void SchoolLists<T>::addItem(T* item)
{
	items.push_back(item);
}

template <class T>
T* SchoolLists<T>::getItem(int index)
{
	if (index >= 0 && index < items.size())
		return items[index];
	return NULL;
}

template <class T>
void SchoolLists<T>::removeItem(T* item)
{
	for (size_t i = 0; i < items.size(); ++i)
	{
		if (items[i] == item)
		{
			items.erase(items.begin() + i);
			return; // Elemento encontrado e removido
		}
	}
}
