/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:24:15 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/19 08:46:58 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include "Tool.hpp"

class Shovel : public Tool
{
	private:
		int numberOfUses;

	public:
		Shovel(int uses);
		~Shovel();
		void use() override;
		int getNumberOfUses() const;
};

#endif