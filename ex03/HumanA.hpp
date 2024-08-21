/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:50:55 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 11:50:55 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA(void);
			void	attack(void);
			void	setWeapon(Weapon weapon);

	private:
			std::string	_name;
			Weapon		&_weapon;
};

#endif