/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:35:18 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/25 19:35:18 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("Marc");
	Zombie	*zombie2;

	zombie1.announce();
	randomChump("Steve");
	zombie2 = newZombie("Lisa");
	zombie2->announce();
	delete(zombie2);
	return 0;
}