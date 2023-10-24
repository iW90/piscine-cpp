/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileLogger.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:43:33 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/24 14:51:48 by inwagner         ###   ########.fr       */
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

	public:
		FileLogger(const char* filename, const char* header = "");
		void write(const char* message);
};

#endif

// FileLogger.cpp
FileLogger::FileLogger(const char* filename, const char* header) : filename(filename), header(header) {}

void FileLogger::write(const char* message)
{
	std::ofstream file(filename, std::ios::app);
	if (file.is_open())
	{
		file << header << message << "\n";
		file.close();
	}
}
