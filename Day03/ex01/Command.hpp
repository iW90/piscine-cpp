/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Command.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:14:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 12:04:29 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_HPP
# define COMMAND_HPP

# include <vector>
# include <string>

enum DayOfWeek
{
	SUNDAY = 0,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

struct Article
{
	int quantity;
	std::string name;
	double price;
};

class Command
{
	private:
		int id;
		DayOfWeek	date;
		std::string client;
		std::vector<Article> articles;

	protected:
		int			get_id()
		{
			return id;
		}
		DayOfWeek		get_date()
		{
			return date;
		}
		std::string&	get_client()
		{
			return client;
		}
		std::vector<Article>& get_articles()
		{
			return articles;
		}

	public:
		Command(int id, DayOfWeek date, std::string& client, std::vector<Article>& articles)
		: id(id), date(date), client(client), articles(articles) {}
		~Command() {};

		virtual double	get_total_price()
		{
			double totalPrice = 0.0;
			std::vector<Article>& articles = get_articles();
			for (size_t i = 0; i < articles.size(); i++)
				totalPrice += articles[i].price;
			return (totalPrice);
		}
};

#endif