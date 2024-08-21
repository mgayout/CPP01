/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:35:41 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/25 19:35:41 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
			Zombie(std::string name);
			~Zombie();
			void	announce(void);

	private:
			std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif