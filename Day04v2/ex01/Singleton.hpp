/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:59:31 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 16:06:06 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLETON_HPP
# define SINGLETON_HPP

template<typename T, typename ItemType>
class	Singleton
{
	private:
		std::vector<ItemType> items;

	protected:
		Singleton() = default;
		~Singleton() = default;

		Singleton(const Singleton&) = delete;
		Singleton& operator=(const Singleton&) = delete;

	public:
		static T& getInstance()
		{
			static T instance;
			return instance;
		}

		void add(ItemType item)
		{
			items.push_back(item);
		}

		std::vector<ItemType> getAll() const
		{
			return items;
		}
	};

#endif
