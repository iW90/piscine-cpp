/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classroom.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:38:44 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 16:38:55 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Classroom : public Room
{
	private:
		Course* _currentRoom;

	public:
		Classroom();
		void assignCourse(Course* p_course);
};