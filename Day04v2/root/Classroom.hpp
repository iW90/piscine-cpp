/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Clasroom.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:04:01 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/25 22:46:57 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSROOM_HPP
# define CLASSROOM_HPP

class	Classroom : public Room
{
	private:
		Course*	_currentRoom;

	public:
		Classroom();
		void	assignCourse(Course* p_course);
};

#endif
