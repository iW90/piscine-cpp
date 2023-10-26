/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StudentList.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:56:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 12:04:10 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENTLIST_HPP
# define STUDENTLIST_HPP

# include "SchoolLists.hpp"
# include "Student.hpp"

class StudentList : public SchoolLists<Student>
{
	public:
		static StudentList& getItem()
		{
			static StudentList instance;
			return instance;
		}
};

#endif
