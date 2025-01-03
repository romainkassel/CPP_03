/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:48:45 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 00:04:49 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor (void) of ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) :
_name(name),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
	std::cout << "Default constructor (std::string name) of ClapTrap " << name << " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) :
_name(src._name),
_hitPoints(src._hitPoints),
_energyPoints(src._energyPoints),
_attackDamage(src._attackDamage)
{
	std::cout << "Constructor by copy of ClapTrap " << src._name << " called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor of ClapTrap " << this->_name << " called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	
	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	std::cout << "******************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "_energyPoints before : " << this->_energyPoints << std::endl;
	std::cout << "_hitPoints before : " << this->_hitPoints << std::endl;
	std::cout << std::endl;
	
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is OOM, can't attack!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->_hitPoints == 0 || this->_hitPoints < 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead, can't attack!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;	
	}

	std::cout << std::endl;
	std::cout << "_energyPoints after : " << this->_energyPoints << std::endl;
	std::cout << "_hitPoints after : " << this->_hitPoints << std::endl;
	std::cout << std::endl;
	
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "******************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "_hitPoints before : " << this->_hitPoints << std::endl;
	std::cout << std::endl;
	
	if (this->_hitPoints == 0 || this->_hitPoints < 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, can no longer take damage!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " takes damage and loses " << amount << " hit points!" << std::endl;
		this->_hitPoints -= amount;
	}

	std::cout << std::endl;
	std::cout << "_hitPoints after : " << this->_hitPoints << std::endl;
	std::cout << std::endl;
	
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "******************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "_energyPoints before : " << this->_energyPoints << std::endl;
	std::cout << "_hitPoints before : " << this->_hitPoints << std::endl;
	std::cout << std::endl;
	
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is OOM, can't be repaired!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->_hitPoints == 0 || this->_hitPoints < 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead, can't be repaired!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " heals itself with " << amount << " hit points!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
	
	std::cout << std::endl;
	std::cout << "_energyPoints after : " << this->_energyPoints << std::endl;
	std::cout << "_hitPoints after : " << this->_hitPoints << std::endl;
	std::cout << std::endl;
	
	return ;
}

std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}
