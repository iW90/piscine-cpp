/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ILogger.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:44:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 20:45:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ILogger.hpp
#ifndef ILOGGER_HPP
#define ILOGGER_HPP

class ILogger
{
	public:
		virtual void write(const char* message) = 0;
		virtual ~ILogger() {}
};

#endif
