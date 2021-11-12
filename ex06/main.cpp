/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 10:40:31 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/12 18:09:14 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


static const std::string g_log_levels[] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

static int log_level_int(std::string input) {
	for (int i = 0; i < 4; i++) {
		if (input.compare(g_log_levels[i]) == 0)
			return (i);
	}
	return (-1);
}

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	Karen annoying = Karen();
	std::string str(av[1]);
	switch (log_level_int(av[1])) {
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case (0):
			annoying.complain(g_log_levels[0]);
		case (1):
			annoying.complain(g_log_levels[1]);
		case (2):
			annoying.complain(g_log_levels[2]);
		case (3):
			annoying.complain(g_log_levels[3]);
	}
	return (0);
}
