/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:36:06 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 10:36:06 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		i;

	i = 4;
	horde = zombieHorde(i, "Antoine");
	for (int j = 0; j != i; j++)
		horde[j].announce();
	delete [] horde;
	return 0;
}