/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:46:36 by opopov            #+#    #+#             */
/*   Updated: 2025/08/11 14:26:48 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

void my_replace(int pos, std::string &line, std::string replace, std::string origin)
{
	line.erase(pos, origin.length());
	line.insert(pos, replace);
}

void my_search(std::string &line, std::string origin, std::string replace)
{
	size_t pos = 0;
	while ((pos = line.find(origin, pos)) != std::string::npos)
	{
		my_replace(pos, line, replace, origin);
		pos += replace.length();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: There should be 3 inputs" << std::endl;
		return (1);
	}
	std::string line;
	std::string str_file = argv[1];
	std::string origin = argv[2];
	std::string replace = argv[3];
	std::ifstream file_origin(str_file.c_str());
	if (!file_origin.is_open())
	{
		std::cout << "Error: Cannot open input file" << std::endl;
		return (1);
	}
	std::ofstream file_copy((str_file + ".replace").c_str());
	while (std::getline(file_origin, line))
	{
		my_search(line, origin, replace);
		file_copy << line << std::endl;
	}
	file_origin.close();
	file_copy.close();
	return (0);
}
