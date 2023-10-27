/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Observer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:20:27 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:20:46 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBSERVER_HPP
# define OBSERVER_HPP

enum class Event;

class   Observer
{
	public:
		virtual void update(Event event, bool isBellRinging) = 0;
};

#endif