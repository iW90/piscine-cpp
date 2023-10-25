/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PackageReductionDiscountCommand.hpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:15:16 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 23:07:40 by inwagner         ###   ########.fr       */
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
			double	totalPrice = Command::get_total_price();
			return (totalPrice > 150.0) ? totalPrice - 10.0 : totalPrice;
		}
};

#endif
