/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThuesdayDiscountCommand.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:15:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 23:08:44 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef THUESDAY_DISCOUNT_COMMAND_HPP
# define THUESDAY_DISCOUNT_COMMAND_HPP

# include "Command.hpp"

class ThuesdayDiscountCommand : public Command
{
	public:
		ThuesdayDiscountCommand(int id, DayOfWeek& date, std::string& client, std::vector<Article>& articles)
		: Command(id, date, client, articles) {}
		~ThuesdayDiscountCommand() {}

		double get_total_price()
		{
			double totalPrice = Command::get_total_price();
			return (get_date() == TUESDAY || get_date() == THURSDAY) ? totalPrice * 0.9 : totalPrice;
		}
};

#endif
