/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 11:58:04 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/12 17:56:25 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int n = 12;
	Zombie *horde;

	horde = zombieHorde(n, "mob mob m-m-m-mob");
	for (int i = 0; i < n; i++) {
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
