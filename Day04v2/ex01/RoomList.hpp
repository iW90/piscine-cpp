/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RoomList.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:49:57 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 12:24:15 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROOMLIST_HPP
# define ROOMLIST_HPP

# include "Singleton.hpp"
# include "Room.hpp"

class RoomList : public Singleton<RoomList, Room*>
{
	//friend class Singleton<RoomList, Room*>;
};

#endif