/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RoomList.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:56:45 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:00:49 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROOM_LIST_HPP
# define ROOM_LIST_HPP

# include "SchoolLists.hpp"
# include "Room.hpp"

class RoomList : public SchoolLists<Room>
{
};

#endif
