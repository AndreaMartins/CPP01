/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:39:19 by andmart2          #+#    #+#             */
/*   Updated: 2025/02/12 13:03:24 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replace_strings(std::string line, std::string s1, std::string s2)
{
	size_t	size;
	size_t	start;

	std::string newLine;
	start = 0;
	while (true)
	{
		size = line.find(s1, start);
		if (size == std::string::npos)
			break ;
		newLine += line.substr(start, size - start) + s2;
		start = size + s1.length();
	}
	newLine += line.substr(start);
	return (newLine);
}

int	main(int argc, char *argv[])
{
	if (argc != 4 || !std::string(argv[2]).length()
		|| !std::string(argv[3]).length() || !std::string(argv[1]).length())
	{
		std::cout << "Please write three arguments: <filename> <oldstring> <newstring>" << std::endl;
		return (1);
	}

	std::ifstream infile;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	infile.open(argv[1], std::ios_base::in);
	std::ofstream outfile;
	std::string s3 = std::string(argv[1]) + ".replace";
	outfile.open(s3.c_str(), std::ios_base::out);
	if (!infile.is_open() || !outfile.is_open())
	{
		std::cout << argv[1] << ": Error opening file." << std::endl;
		return (1);
	}
	std::string line;
	while (getline(infile, line))
	{
		line = replace_strings(line, s1, s2);
		outfile << line << std::endl;
	}
}