/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 13:11:49 by nschat        #+#    #+#                 */
/*   Updated: 2021/10/28 16:33:47 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		static Zombie *newZombie(std::string name);
		static void randomChump(std::string name);

	private:
		std::string _name;
};
