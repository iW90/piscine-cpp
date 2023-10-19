/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:25:39 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 08:47:26 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAMMER_HPP
# define HAMMER_HPP

# include "Tool.hpp"

class Hammer : public Tool
{
	private:
		int numberOfUses;

	public:
		Hammer(int uses);
		~Hammer();
		void use() override;
		int getNumberOfUses() const;
};

#endif
