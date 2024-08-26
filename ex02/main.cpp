/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:36:41 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/30 11:36:41 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	//std::string str2 = "BOOM";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address" <<std::endl;
	std::cout << "str :       " << &str <<std::endl;
	std::cout << "stringPTR : " << stringPTR <<std::endl;
	std::cout << "stringREF : " << &stringREF <<std::endl;
	std::cout << "Content" <<std::endl;
	std::cout << "str :       " << str <<std::endl;
	std::cout << "stringPTR : " << *stringPTR <<std::endl;
	std::cout << "stringREF : " << stringREF <<std::endl;
	/*stringPTR = &str2;
	stringREF = str2;
	std::cout << "stringPTR : " << stringPTR <<std::endl;
	std::cout << "stringPTR : " << *stringPTR <<std::endl;
	std::cout << "stringREF : " << &stringREF <<std::endl;
	std::cout << "stringREF : " << stringREF <<std::endl;*/
	return 0;
}
