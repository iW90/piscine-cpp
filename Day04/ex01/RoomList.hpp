/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RoomList.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:56:45 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 16:22:39 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROOM_LIST_HPP
# define ROOM_LIST_HPP

# include "SchoolLists.hpp"
# include "Room.hpp"

class RoomList : public Singleton<RoomList, Room*>
{
};

#endif
