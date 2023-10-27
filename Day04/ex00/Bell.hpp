/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bell.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:18:55 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:54:23 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BELL_HPP
# define BELL_HPP

# include "Observer.hpp"
# include <vector>

enum class Event
{
	RingBell
};

class Bell
{
	private:
		std::vector<Observer*> observers;
		bool isBellRinging;

	public:
		Bell() {};
		~Bell() {};
		void addObserver(Observer* observer) { observers.push_back(observer); }
		void ringBell();
};

#endif
