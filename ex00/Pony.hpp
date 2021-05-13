/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/13 14:42:04 by nschat        #+#    #+#                 */
/*   Updated: 2021/05/13 17:03:32 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class Pony {
	private:
		int hooves, legs, body, tail, head, ears, eyes, mouth, nose;

	public:
		void ponyOnTheHeap();
		void ponyOnTheStack();
};

#endif
