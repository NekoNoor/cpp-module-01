/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:18:25 by nschat        #+#    #+#                 */
/*   Updated: 2021/10/29 13:39:30 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string &Weapon::getType()
{
	return (_type);
}
