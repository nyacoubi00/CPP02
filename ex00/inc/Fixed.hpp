/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyacoubi <nyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:38:22 by nyacoubi          #+#    #+#             */
/*   Updated: 2024/12/19 11:39:11 by nyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					value;
		static const int	nb_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &tocopy);
		~Fixed();
		Fixed &operator=(const Fixed& tocopy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};




#endif