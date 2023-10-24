/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secretary.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:43 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 16:44:55 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Secretary : public Staff
{
	private:

	public:
		Form* createForm(FormType p_formType);
		void archiveForm();
};