/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StudentList.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:56:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 23:07:12 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENTLIST_HPP
# define STUDENTLIST_HPP

# include "Singleton.hpp"
# include "Student.hpp"

class StudentList : public Singleton<StudentList, Student*>
{
};

#endif
