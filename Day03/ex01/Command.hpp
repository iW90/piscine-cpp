/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:14:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 14:14:59 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_HPP
# define COMMAND_HPP

# include <vector>
# include <string>

struct Date
{
	int	day;
	int	month;
	int	year;
};

class Command
{
	private:
		int id;
		Date date;
		std::string client;
		std::vector<std::pair<int, std::string> > articles;

	protected:
		double get_article_price(const std::string& article_name) const;

	public:
		Command(int id, const Date& date, const std::string& client, const std::vector<std::pair<int, std::string> >& articles);
		~Command();

		virtual double		get_total_price() const;

		const int			get_id() const;
		const Date&			get_date() const;
		const std::string&	get_client() const;
};

#endif