/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:56:50 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:07:05 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COURSELIST_HPP
# define COURSELIST_HPP

# include "Singleton.hpp"
# include "Course.hpp"

class CourseList : public Singleton<CourseList, Course*>
{
};

#endif
