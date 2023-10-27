/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Observer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:17:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:44:42 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBSERVER_HPP
# define OBSERVER_HPP

enum class Event;

class Observer
{
	public:
		virtual void update(Event event) = 0;
};

#endif
