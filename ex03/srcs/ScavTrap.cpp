/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:14:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 23:59:41 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void )
{
    std::cout << "Default constructor (void) of ScavTrap called" << std::endl;
    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name),
_name(name),
_hitPoints(100),
_energyPoints(50),
_attackDamage(20)
{
    std::cout << "Default constructor (std::string name) of ScavTrap " << name << " called" << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src),
_name(src._name),
_hitPoints(src._hitPoints),
_energyPoints(src._energyPoints),
_attackDamage(src._attackDamage)
{
	std::cout << "Constructor by copy of ScavTrap " << this->_name << " called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor of ScavTrap " << this->_name << " called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	
	return (*this);
}

void		ScavTrap::attack(const std::string& target)
{
	std::cout << "******************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "_energyPoints before : " << this->_energyPoints << std::endl;
	std::cout << "_hitPoints before : " << this->_hitPoints << std::endl;
	std::cout << std::endl;
	
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is OOM, can't attack!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead, can't attack!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;	
	}

	std::cout << std::endl;
	std::cout << "_energyPoints after : " << this->_energyPoints << std::endl;
	std::cout << "_hitPoints after : " << this->_hitPoints << std::endl;
	std::cout << std::endl;
	
	return ;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
    return ;
}

std::string	ScavTrap::getName( void ) const
{
	return (this->_name);
}

int			ScavTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

int			ScavTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int			ScavTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}