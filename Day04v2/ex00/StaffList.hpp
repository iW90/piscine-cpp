/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaffList.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:12:49 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 16:02:37 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STAFFLIST_HPP
# define STAFFLIST_HPP

# include "Singleton.hpp"
# include "Staff.hpp"

class	StaffList : public Singleton<StaffList, Staff*>
{
	//friend class	Singleton<StaffList, Staff*>;
};

#endif
