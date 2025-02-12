/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:46:41 by andmart2          #+#    #+#             */
/*   Updated: 2025/02/12 13:05:56 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Wrong number of parameters. Try ./harlFilter <level>" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}