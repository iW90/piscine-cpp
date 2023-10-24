/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:41:55 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 16:42:00 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Form
{
	private:
		FormType _formType;

	public:
		Form(FormType p_formType)
		{

		}

		virtual void execute() = 0;
};