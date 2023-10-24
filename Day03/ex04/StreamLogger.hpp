/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamLogger.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:40:06 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 14:36:44 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMLOGGER_HPP
# define STREAMLOGGER_HPP

# include "ILogger.hpp"
# include <iostream>

class StreamLogger : public ILogger
{
	private:
		std::ostream& outputStream;
		const char* header;

	public:
		StreamLogger(std::ostream& stream, const char* header = "");
		void write(const char* message);
};

#endif


// StreamLogger.cpp
StreamLogger::StreamLogger(std::ostream& stream, const char* header) : outputStream(stream), header(header) {}

void StreamLogger::write(const char* message)
{
	outputStream << header << message << std::endl;
}

