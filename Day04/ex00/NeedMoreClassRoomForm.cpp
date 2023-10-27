/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:48:27 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 10:23:23 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NeedMoreClassRoomForm.hpp"
# include <iostream>

NeedMoreClassRoomForm::NeedMoreClassRoomForm(const std::string& cName, int current, int expected) : 
	Form(FormType::NeedMoreClassRoom),
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