/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 16:44:22 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Headmaster : public Staff
{
	private:
		std::vector<Form*> _formToValidate;
		
	public:
		void receiveForm(Form* p_form);
};