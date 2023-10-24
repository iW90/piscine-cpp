/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PackageReductionDiscountCommand.hpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:15:16 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 12:02:51 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP
# define PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP

# include "Command.hpp"

class PackageReductionDiscountCommand : public Command
{
	public:
		PackageReductionDiscountCommand(int id, DayOfWeek& date, std::string& client, std::vector<Article>& articles)
		: Command(id, date, client, articles) {}
		~PackageReductionDiscountCommand() {}

		double get_total_price()
		{
			double totalPrice = 0.0;
			std::vector<Article>& articles = get_articles();
			for (size_t i = 0; i < articles.size(); i++)
				totalPrice += articles[i].price;
			if (totalPrice > 150.0)
				totalPrice -= 10;
			return totalPrice;
		}
};

#endif
