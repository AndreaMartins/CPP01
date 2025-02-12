/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:59:11 by andmart2          #+#    #+#             */
/*   Updated: 2025/02/12 12:55:54 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;

	zombie = newZombie("Bernarda");
	zombie->announce();
	randomChump("Alberto");
	delete (zombie);
	return (0);
}