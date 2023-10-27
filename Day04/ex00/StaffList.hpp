/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaffList.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:56:26 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:07:23 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STAFFLIST_HPP
# define STAFFLIST_HPP

# include "Singleton.hpp"
# include "Staff.hpp"

class StaffList : public Singleton<StaffList, Staff*>
{
};

#endif
