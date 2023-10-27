/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:43:55 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/27 00:45:54 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headmaster.hpp"

void Headmaster::signLastForm()
{
	if (!_formToValidate.empty())
		_formToValidate.back()->signDocument();
}

void Headmaster::dispatchLastForm()
{
	if (!_formToValidate.empty())
	{
		_formToValidate.back()->execute();
		_secretary.archiveForm(std::move(_formToValidate.back()));
		_formToValidate.pop_back(); // remove it from the list after dispatching
	}
}