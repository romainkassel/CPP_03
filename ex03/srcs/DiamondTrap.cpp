/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:35:18 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 00:11:03 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void )
{
    std::cout << "Default constructor (void) of DiamondTrap called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap( std::string name ) :
ClapTrap(name + "_clap_name"),
ScavTrap(name),
FragTrap(name),
_name(name),
_hitPoints(FragTrap::_hitPoints),
_energyPoints(ScavTrap::_energyPoints),
_attackDamage(FragTrap::_attackDamage)
{
    std::cout << "Default constructor (std::string name) of DiamondTrap " << name << " called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src) :
ClapTrap(src),
ScavTrap(src),
FragTrap(src),
_name(src._name),
_hitPoints(src._hitPoints),
_energyPoints(src._energyPoints),
_attackDamage(src._attackDamage)
{
    std::cout << "Constructor by copy of DiamondTrap " << src._name << " called" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "Destructor of DiamondTrap " << this->_name << " called" << std::endl;
    return ;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const & rhs )
{
    this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
    
    return (*this);
}

std::string	DiamondTrap::getName( void ) const
{
    return (this->_name);
}

int         DiamondTrap::getHitPoints( void ) const
{
    return (this->_hitPoints);
}

int         DiamondTrap::getEnergyPoints( void ) const
{
    return (this->_energyPoints);
}

int         DiamondTrap::getAttackDamage( void ) const
{
    return (this->_attackDamage);
}

void        DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack( target );
    return ;
}

void        DiamondTrap::whoAmI( void )
{
    std::cout << "My DiamondTrap name is : " << this->_name << std::endl;
    std::cout << "My ClapTrap name is    : " << ClapTrap::_name << std::endl;
    return ;
}