/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:49:57 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/26 16:02:25 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COURSELIST_HPP
# define COURSELIST_HPP

# include "Singleton.hpp"
# include "Course.hpp"

class	CourseList : public Singleton<CourseList, Course*>
{
	//friend class Singleton<CourseList, Course*>;
};

#endif
