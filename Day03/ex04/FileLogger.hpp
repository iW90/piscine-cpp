/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileLogger.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:43:33 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 22:57:51 by inwagner         ###   ########.fr       */
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
			char timestamp[20];
			time(&rawtime);
			timeinfo = localtime(&rawtime);
			strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S ", timeinfo);
			file << timestamp;
		}
		if (header)
			file << header;
		file << message << "\n";
		file.close();
	}
}
