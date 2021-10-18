/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 11:58:04 by nschat        #+#    #+#                 */
/*   Updated: 2021/10/18 15:02:20 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	{
		Zombie bonk = Zombie("bonk");
		bonk.announce();
	}
	{
		Zombie *bob = Zombie::newZombie("bob");
		bob->announce();
		delete bob;
	}
	{
		Zombie::randomChump("greg");
	}
	return (0);
}
