/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:10:52 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:03:45 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLETON_HPP
# define SINGLETON_HPP

# include <vector>

template<typename T, typename ItemType>
class Singleton
{
	private:
		Singleton() {};
		std::vector<ItemType> items;

	protected:
		~Singleton() {};
		Singleton(const Singleton&) {}

	public:
		static T& getInstance()
		{
			static T instance;
			return instance;
		}

		void addItem(ItemType item)
		{
			items.push_back(item);
		}

		std::vector<ItemType> getList() const
		{
			return items;
		}
};

#endif