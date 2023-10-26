/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:43 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/26 11:38:43 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SECRETARY_HPP
# define SECRETARY_HPP

# include "Staff.hpp"

class FormType;

class Secretary : public Staff
{
	public:
		Secretary(std::string p_name) : Staff(p_name) {}
		~Secretary() {}
		Form* createForm(FormType p_formType);
		void archiveForm();
};

#endif
