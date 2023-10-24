/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:43:46 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 16:43:58 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Student : public Person
{
	private:
		std::vector<Course*> _subscribedCourse;

	public:
		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
};