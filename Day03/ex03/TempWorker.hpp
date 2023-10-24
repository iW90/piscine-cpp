/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TempWorker.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:27:05 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 15:29:53 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_WORKER_HPP
# define TEMP_WORKER_HPP

class TempWorker : public Employee
{
	private:
		int totalWorkHours;

	public:
		int executeWorkday();
		void logWorkHours(int hours);

		TempWorker(int hours) : Employee(0), totalWorkHours(hours) {}
		~TempWorker();
};

#endif
