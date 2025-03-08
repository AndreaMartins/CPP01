/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:39:19 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 18:48:19 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replace_strings(std::string line, std::string s1, std::string s2)
{
    size_t size;
    size_t start;
    std::string newLine;

	start = 0;

    while (true)
    {
        size = line.find(s1, start);
        if (size == std::string::npos)
            break;
        newLine += line.substr(start, size - start) + s2;
        start = size + s1.length();
    }
    newLine += line.substr(start);
    return newLine;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <oldstring> <newstring>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: The string to replace (s1) cannot be empty.\n";
        return 1;
    }

    std::ifstream infile(filename);
    if (!infile)
    {
        std::cerr << "Error: Could not open input file '" << filename << "'\n";
        return 1;
    }

    std::string outFilename = filename + ".replace";
    std::ofstream outfile(outFilename);
    if (!outfile)
    {
        std::cerr << "Error: Could not create output file '" << outFilename << "'\n";
        return 1;
    }

    std::string line;
    while (getline(infile, line))
    {
        outfile << replace_strings(line, s1, s2) << '\n';
    }

    std::cout << "File processed successfully: " << outFilename << '\n';

    return 0;
}
