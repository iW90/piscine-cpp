/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RoomList.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:54:19 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 07:49:54 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROOMLIST_HPP
# define ROOMLIST_HPP

# include "Singleton.hpp"
# include "Room.hpp"

class RoomList : public Singleton<RoomList, Room*>
{
};

#endif
