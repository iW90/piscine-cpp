/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:56:50 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:01:04 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COURSE_LIST_HPP
# define COURSE_LIST_HPP

# include "SchoolLists.hpp"
# include "Course.hpp"

class CourseList : public SchoolLists<Course>
{
};

#endif
