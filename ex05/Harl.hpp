/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:18:23 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 19:18:23 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
			Harl();
			~Harl();
			void	complain(std::string level);

	private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
};

typedef void	(Harl::*function_p)(void);
int	getId(std::string level);

#endif