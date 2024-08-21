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
	int		j;

	i = 4;
	horde = zombieHorde(i, "Antoine");
	j = -1;
	while (++j != i)
		horde[j].announce();
	delete [] horde;
	return 0;
}