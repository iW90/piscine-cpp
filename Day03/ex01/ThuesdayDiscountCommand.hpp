/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThuesdayDiscountCommand.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:15:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 12:02:45 by inwagner         ###   ########.fr       */
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
			double totalPrice = 0.0;
			std::vector<Article>& articles = get_articles();
			if (get_date() == TUESDAY || get_date() == THURSDAY)
				for (size_t i = 0; i < articles.size(); i++)
					totalPrice += articles[i].price - articles[i].price * 0.10;
			return totalPrice;
		}
};

#endif
