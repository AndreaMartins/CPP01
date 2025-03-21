/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:41:14 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 19:33:16 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./harl <level>" << std::endl;
        return 1;
    }

    Harl harl;
    harl.complain(argv[1]);  // Pasa el argumento como nivel de queja

    return 0;
}
