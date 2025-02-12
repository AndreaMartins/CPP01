/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:27:50 by andmart2          #+#    #+#             */
/*   Updated: 2025/02/12 12:58:53 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	std::cout << "HumanA constructor called." << std::endl;
	if (!name.empty())
		_name = name;
	else
		_name = "No name";
	_weapon = &weapon;
}

void HumanA::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their fists." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called." << std::endl;
}