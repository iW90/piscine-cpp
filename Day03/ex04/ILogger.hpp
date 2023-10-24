/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ILogger.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:44:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 14:31:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ILOGGER_HPP
#define ILOGGER_HPP

class ILogger
{
	public:
		virtual void write(const char* message) = 0;
		virtual ~ILogger() {}
};

#endif
