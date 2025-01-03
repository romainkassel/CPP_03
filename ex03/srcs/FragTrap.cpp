/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:02:58 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 00:00:55 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    std::cout << "Default constructor (void) of FragTrap called" << std::endl;
    return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name),
_name(name),
_hitPoints(100),
_energyPoints(100),
_attackDamage(30)
{
    std::cout << "Default constructor (std::string name) of FragTrap " << name << " called" << std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src),
_name(src._name),
_hitPoints(src._hitPoints),
_energyPoints(src._energyPoints),
_attackDamage(src._attackDamage)
{
    std::cout << "Constructor by copy of FragTrap " << this->_name << " called" << std::endl;
    return ;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Destructor of FragTrap " << this->_name << " called" << std::endl;
    return ;
}

FragTrap	&FragTrap::operator=( FragTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	
	return (*this);
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "Positive high fives request from FragTrap " << this->_name << std::endl;
    return ;
}

std::string	FragTrap::getName( void ) const
{
	return (this->_name);
}

int			FragTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

int			FragTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int			FragTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}