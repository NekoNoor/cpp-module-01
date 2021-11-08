/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 10:43:31 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/08 14:18:02 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
}

Karen::~Karen() {
}

void	Karen::debug(void) {
	std::cout << "DEBUG: I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "INFO: I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "ERROR: This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {
	void (Karen::*log_functions[])() = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string log_levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++) {
		if (level.compare(log_levels[i]) == 0)
			(this->*log_functions[i])();
	}
}
