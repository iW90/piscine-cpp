/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchoolLists.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:41:19 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 12:07:46 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCHOOLLISTS_HPP
# define SCHOOLLISTS_HPP

# include "Singleton.hpp"
# include <vector>

template <class T>
class SchoolLists : public Singleton<SchoolLists<T> >
{
	protected:
		std::vector<T*> items;

	public:
		void addItem(T* item);
		T* getItem(int index);
		void removeItem(T* item);
};

#endif
