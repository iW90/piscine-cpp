/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:57:26 by maalexan          #+#    #+#             */
/*   Updated: 2023/10/27 11:00:15 by maalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headmaster.hpp"

void	Headmaster::dispatchAllForms()
{
	for (auto& form : _formToValidate)
	{
		form->execute();
		_secretary.archiveForm(std::move(form));
	}
	_formToValidate.clear();
}
