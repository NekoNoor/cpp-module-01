/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 10:40:31 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/08 14:13:24 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen annoying = Karen();
	annoying.complain("DEBUG");
	annoying.complain("INFO");
	annoying.complain("WARNING");
	annoying.complain("ERROR");
	annoying.complain("blabla");
	annoying.complain("bloop");
	annoying.complain("meep");
	annoying.complain("mrrrp");
}
