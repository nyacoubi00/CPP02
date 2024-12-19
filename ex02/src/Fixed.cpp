/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyacoubi <nyacoubi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:56:33 by nyacoubi          #+#    #+#             */
/*   Updated: 2024/12/19 15:14:59 by nyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &tocopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = tocopy;
}

Fixed::~Fixed()
{	
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& tocopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &tocopy)
		_value = tocopy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	_value = val << _FractionalBits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(val * (1 << 8));
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << 8));
}

int	Fixed::toInt(void) const
{
	return (_value >> _FractionalBits);	
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &dst)
{
	return (this->_value > dst._value);
}

bool Fixed::operator<(const Fixed &dst)
{
	return (this->_value < dst._value);
}

bool Fixed::operator>=(const Fixed &dst)
{
	return (this->_value >= dst._value);
}

bool Fixed::operator<=(const Fixed &dst)
{
	return (this->_value >= dst._value);
}

Fixed &Fixed::operator+(const Fixed &dst)
{
	return (this->toFloat() + dst.toFloat());	
}
