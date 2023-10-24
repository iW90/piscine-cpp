/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:45:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 16:45:20 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Professor : public Staff
{
	private:
		Course* _currentCourse;

	public:
		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();
};