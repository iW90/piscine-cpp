/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamLogger.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:40:06 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 14:39:11 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMLOGGER_HPP
# define STREAMLOGGER_HPP

# include "ILogger.hpp"
# include <iostream>
# include <ctime>

class StreamLogger : public ILogger
{
	private:
		std::ostream& outputStream;
		const char* header;
		bool includeTimestamp;

	public:
		StreamLogger(std::ostream& stream, const char* header = "", bool includeTimestamp = false);
		void write(const char* message);
};

#endif


// StreamLogger.cpp
StreamLogger::StreamLogger(std::ostream& stream, const char* header, bool includeTimestamp)
	: outputStream(stream), header(header), includeTimestamp(includeTimestamp) {}

void StreamLogger::write(const char* message)
{
	if (includeTimestamp)
	{
		time_t rawtime;
		struct tm* timeinfo;
		char timestamp[25];

		time(&rawtime);
		timeinfo = localtime(&rawtime);
		size_t len = strftime(timestamp, sizeof(timestamp) - 1, "%Y-%m-%d %H:%M:%S", timeinfo);
		timestamp[len] = '\0';
		outputStream << timestamp;
	}
	if (header)
		outputStream << header;
	outputStream << message << std::endl;
}
