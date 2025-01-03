/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:14:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 13:55:51 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void )
{
    std::cout << "Default constructor (void) of ScavTrap called" << std::endl;
    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "Default constructor (std::string name) of ScavTrap " << name << " called" << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
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

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
    return ;
}