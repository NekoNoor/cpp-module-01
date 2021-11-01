/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 13:22:51 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/01 14:16:05 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (1);
	}
	std::string filename(av[1]);
	std::string find(av[2]);
	std::string replace(av[3]);
	if (filename.empty() || find.empty() || replace.empty()) {
		std::cout << "Error: empty arguments provided" << std::endl;
		return (2);
	}
	std::ifstream infile(filename);
	std::string content;
	if (infile.is_open()) {
		content.assign((std::istreambuf_iterator<char>(infile)), (std::istreambuf_iterator<char>()));
	} else {
		std::cout << "Error: failed to input open file" << std::endl;
		return (3);
	}
	std::ofstream outfile(filename.append(".replace"));
	if (outfile.is_open()) {
		size_t pos = 0;
		while (true) {
			pos = content.find(find, pos);
			if (pos == std::string::npos)
				break;
			content.replace(pos, find.length(), replace);
		}
		outfile << content;
	} else {
		std::cout << "Error: failed to open output file" << std::endl;
		return (4);
	}
	return (0);
}
