/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaffList.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:56:26 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:00:36 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STAFF_LIST_HPP
# define STAFF_LIST_HPP

# include "SchoolLists.hpp"
# include "Staff.hpp"

class StaffList : public SchoolLists<Staff>
{
};

#endif
