/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:21:46 by andmart2          #+#    #+#             */
/*   Updated: 2025/02/12 12:58:33 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << "stringVAR:                        " << &stringVAR << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "stringVAR:                        " << stringVAR << std::endl;
	std::cout << "Value pointed by stringPTR:       " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF:       " << stringREF << std::endl;

	return (0);
}