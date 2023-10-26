/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SecretarialOffice.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:39:06 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 09:05:42 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SECRETARIALOFFICE_HPP
# define SECRETARIALOFFICE_HPP

# include "Room.hpp"

class Form;

class SecretarialOffice : public Room
{
	private:
		std::vector<Form*> _archivedForms;

	public:
		SecretarialOffice();
};

#endif
