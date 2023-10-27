/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NeedMoreClassRoomForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:09:44 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 10:47:31 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NeedMoreClassRoomForm.hpp"

NeedMoreClassRoomForm::NeedMoreClassRoomForm(\
const std::string& cName, int current, int expected) :
Form(FormType::NeedMoreClassRoom),
courseName(cName),
currentAttendance(current),
expectedIncrease(expected)
{}

void	NeedMoreClassRoomForm::execute()
{
	std::cout << "New room for "  << courseName;
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
