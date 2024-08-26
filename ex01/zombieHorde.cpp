/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:38:20 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 10:38:20 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	if (N <= 0)
	{
		std::cout << "Did you ever see a horde of " << N << " Zombie(s) ?" << std::endl;
		exit(0);
	}
	else if (N >= __INT_MAX__)
	{
		std::cout << "There are too many Zombies. Do you really want to destroy the World ?" << std::endl;
		exit(0);
	}
	horde = new Zombie[N];
	for (int i = 0; i != N; i++)
		horde[i].setName(name);
	return (horde);
}
