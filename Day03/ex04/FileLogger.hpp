/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileLogger.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:43:33 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/25 14:38:46 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FileLogger.hpp
#ifndef FILELOGGER_HPP
# define FILELOGGER_HPP

# include "ILogger.hpp"
# include <fstream>

class FileLogger : public ILogger
{
	private:
		const char* filename;
		const char* header;
		bool includeTimestamp;

	public:
		FileLogger(const char* filename, const char* header = "", bool includeTimestamp = false);
		void write(const char* message);
};

#endif

// FileLogger.cpp
FileLogger::FileLogger(const char* filename, const char* header, bool includeTimestamp)
	: filename(filename), header(header), includeTimestamp(includeTimestamp) {}

void FileLogger::write(const char* message)
{
	std::fstream file(filename, std::ios::app);
	if (file.is_open())
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
			file << timestamp;
		}
		if (header)
			file << header;
		file << message << "\n";
		file.close();
	}
}
