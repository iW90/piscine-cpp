/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thuesdayDiscount.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:15:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 14:15:08 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef THUESDAY_DISCOUNT_COMMAND_HPP
# define THUESDAY_DISCOUNT_COMMAND_HPP

# include "command.hpp"

class ThuesdayDiscountCommand : public Command
{
	public:
		ThuesdayDiscountCommand(int id, const Date& date, const std::string& client, const std::vector<std::pair<int, std::string> >& articles);
		double get_total_price() const;

	private:
		bool is_thuesday() const;
};

#endif
