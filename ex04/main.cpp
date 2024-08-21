/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:43:40 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 17:43:40 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	replace(char **argv, std::string copy)
{
	std::ofstream	file2;
	int				find;
	int				i;
	

	file2.open((std::string (argv[1]) + ".replace").c_str());
	if (!file2.is_open())
		return (std::cout << "Can't create replace file."<< std::endl, 0);
	i = -1;
	while (++i < (int)copy.size())
	{
		find = copy.find(argv[2], i);
		if (find == i)
		{
			file2 << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			file2 << copy[i];
	}
	file2.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	file1;
	std::string		copy;
	char			c;

	if (argc != 4)
		return (std::cout << "This program needs 3 parameters." << std::endl, 0);
	file1.open(argv[1]);
	if (!file1.is_open())
		return (std::cout << argv[1] << " file doesn't exist." << std::endl, 0);
	while (!file1.eof() && file1 >> std::noskipws >> c)
		copy += c;
	file1.close();
	return (replace(argv, copy));
}