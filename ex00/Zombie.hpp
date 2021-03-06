/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 13:11:49 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/12 15:59:27 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);

	private:
		std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
