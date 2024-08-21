/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:51:28 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 11:51:28 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
			HumanB(std::string name);
			~HumanB(void);
			void	attack(void);
			void	setWeapon(Weapon &weapon);

	private:
			Weapon		*_weapon;
			std::string	_name;

};

#endif