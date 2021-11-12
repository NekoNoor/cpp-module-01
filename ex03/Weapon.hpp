/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:18:37 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/12 15:59:27 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		void setType(std::string type);
		std::string getType();

	private:
		std::string _type;
};

#endif
