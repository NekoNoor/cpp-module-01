/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 13:11:49 by nschat        #+#    #+#                 */
/*   Updated: 2021/10/18 15:05:53 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string);
		~Zombie();
		void announce(void);
		static Zombie *newZombie(std::string);
		static void randomChump(std::string);
		Zombie *zombieHorde(int, std::string);

	private:
		std::string _name;
};
