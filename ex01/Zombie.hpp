/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 13:11:49 by nschat        #+#    #+#                 */
/*   Updated: 2021/10/28 16:28:02 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string);
		~Zombie();
		void announce(void);
		void setName(std::string);

	private:
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);
