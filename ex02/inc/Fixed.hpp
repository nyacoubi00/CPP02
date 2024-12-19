/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyacoubi <nyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:38:22 by nyacoubi          #+#    #+#             */
/*   Updated: 2024/12/19 15:12:43 by nyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class	Fixed
{
	private:
		int					_value;
		static const int	_FractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &tocopy);
		Fixed(const int val);
		Fixed(const	float val);
		~Fixed();
		
		bool operator>(const Fixed &dst);
		bool operator<(const Fixed &dst);
		bool operator>=(const Fixed &dst);
		bool operator<=(const Fixed &dst);
		
		Fixed &operator=(const Fixed& tocopy);
		Fixed &operator+(const Fixed &dst);
		Fixed &operator-(const Fixed &dst);
		Fixed &operator*(const Fixed &dst);
		Fixed &operator/(const Fixed &dst);
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif