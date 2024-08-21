/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:36:19 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 10:36:19 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class Zombie
{
	public:
			Zombie();
			~Zombie();
			void	setName(std::string name);
			void	announce(void);

	private:
			std::string name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif