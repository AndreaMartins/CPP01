/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:41:59 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 19:33:01 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Constructor & Destructor */
Harl::Harl() {}
Harl::~Harl() {}

/* Funciones privadas de quejas */
void Harl::debug(void) {
    std::cout << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
              << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. "
                 "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
              << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. "
                 "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

/* Función complain con punteros a funciones */
void Harl::complain(std::string level) {
    void (Harl::*complaints[4])(void) = {
        &Harl::debug, &Harl::info, &Harl::warning, &Harl::error
    };

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*complaints[i])();  // Llama a la función correspondiente
            return;  // Termina la ejecución después de encontrar el nivel
        }
    }
}
