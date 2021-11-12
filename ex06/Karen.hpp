/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 10:40:58 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/12 15:59:27 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		typedef void (*log_functions[]);

	public:
		Karen();
		~Karen();
		void complain(std::string level);
};

#endif
