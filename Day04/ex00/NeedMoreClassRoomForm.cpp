/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:48:27 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 22:52:06 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NeedMoreClassRoomForm.hpp"
# include <iostream>

NeedMoreClassRoomForm::NeedMoreClassRoomForm(FormType _formType, std::string& cName, int current, int expected) : 
	Form(_formType),
	courseName(cName),
	currentAttendance(current),
	expectedIncrease(expected)
	{}

void	NeedMoreClassRoomForm::execute()
{
	std::cout << "New room for  "  << courseName;
	std::cout << " expansion";
	if (!isSigned())
	{
		std::cout << " is void." << std::endl;
			return ;
	}
	std::cout << " is approved to accomodate " << expectedIncrease;
	std::cout << " students from the current " << currentAttendance;
	std::cout << "." << std::endl;
}