/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Apprentice.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:21 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 15:29:15 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APPRENTICE_HPP
# define APPRENTICE_HPP

class Apprentice : public Employee
{
	private:
		int schoolHours;
		int workHours;

	public:
		int executeWorkday();
		void logSchoolHours(int hours);

		Apprentice() : Employee(0), schoolHours(0), workHours(0) {}
		~Apprentice();
};

#endif
