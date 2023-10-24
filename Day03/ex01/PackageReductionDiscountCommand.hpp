/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PackageReductionDiscountCommand.hpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:15:16 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 07:57:22 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP
# define PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP

# include "Command.hpp"

class PackageReductionDiscountCommand : public Command
{
	public:
			PackageReductionDiscountCommand(int id, const Date& date, const std::string& client, const std::vector<std::pair<int, std::string> >& articles);
			double get_total_price() const;
};

#endif
