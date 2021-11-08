/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 11:58:04 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/08 17:43:03 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	{
		Zombie bonk("bonk");
		bonk.announce();
	}
	{
		Zombie *bob = newZombie("bob");
		bob->announce();
		delete bob;
	}
	{
		randomChump("greg");
	}
	return (0);
}
