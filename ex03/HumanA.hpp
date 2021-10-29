/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 13:20:00 by nschat        #+#    #+#                 */
/*   Updated: 2021/10/29 13:37:03 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();
		void attack();

	private:
		std::string _name;
		Weapon &_weapon;
};

#endif
