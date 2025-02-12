/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:17:26 by andmart2          #+#    #+#             */
/*   Updated: 2025/02/12 12:56:55 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;
	int N = 3;

	zombie = zombieHorde(N, "Alberto");
	for (int i = 0; i < N; i++)
	{
		zombie[i].announce();
	}
	delete[](zombie);
	return (0);
}