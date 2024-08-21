/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:49:01 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 11:49:01 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
			Weapon(std::string type);
			~Weapon(void);
			const std::string	&getType(void);
			void				setType(std::string type);
	private:
			std::string _type;
};

#endif