/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:17:59 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/01 13:38:44 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void) {
	Weapon knoife("sharp");
	HumanA snobble("boba", knoife);
	snobble.attack();

	Weapon *empty = NULL;
	HumanB gobble("blob");
	gobble.setWeapon(empty);
	gobble.attack();

	Weapon bat("big");
	empty = &bat;
	gobble.setWeapon(empty);
	gobble.attack();
}
