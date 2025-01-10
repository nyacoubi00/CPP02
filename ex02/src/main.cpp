/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyacoubi <nyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:24:34 by nyacoubi          #+#    #+#             */
/*   Updated: 2025/01/10 13:42:38 by nyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"


int	main()
{
	Fixed a(5);
	Fixed b(2.5f);
	Fixed c;
	

	for (int i = 0; a++ < 6; i++)
	{
		std::cout << "Number of iterations : " << i << std::endl;
	}

	/* for (int i = 0; ++a < 6; i++)
	{
		std::cout << "Number of iterations : " << i << std::endl;
	} */

	std::cout << (a != b) << std::endl;
	
}