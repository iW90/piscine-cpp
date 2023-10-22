/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamLogger.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:40:06 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/22 20:43:08 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// StreamLogger.hpp
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

