/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:59:27 by andmart2          #+#    #+#             */
/*   Updated: 2025/02/12 12:56:16 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "No name";
	std::cout << "A zombie without name has been created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	if (!name.empty())
		_name = name;
	else
		_name = "No name";
	std::cout << "A zombie with name " << _name << " has been created" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << ": Got DestroiiiiiiiiidddD..." << std::endl;
}