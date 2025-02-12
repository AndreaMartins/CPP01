/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:31:00 by andmart2          #+#    #+#             */
/*   Updated: 2025/02/12 13:02:54 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon constructor called." << std::endl;
}

const std::string &Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(const std::string newType)
{
	_type = newType;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called." << std::endl;
}