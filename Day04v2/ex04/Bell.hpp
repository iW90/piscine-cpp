/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bell.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:53:28 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:57:25 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BELL_HPP
# define BELL_HPP

# include "Observer.hpp"
# include <vector>

enum class  Event
{
	RingBell
};

class	Bell
{
	private:
		std::vector<Observer*>	observers;
		bool					isBellRinging;

	public:
		Bell() {};
		~Bell() {};

		void	addObserver(Observer* observer)
		 { observers.push_back(observer); }

		void	notifyObservers(Event event);
};

#endif