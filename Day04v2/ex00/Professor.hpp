/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:58:25 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/25 23:04:45 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROFESSOR_HPP
# define PROFESSOR_HPP

class	Professor : public Staff
{
	private:
		Course*	_currentCourse;

	public:
		void	assignCourse(Course* p_course);
		void	doClass();
		void	closeCourse();
};

#endif
