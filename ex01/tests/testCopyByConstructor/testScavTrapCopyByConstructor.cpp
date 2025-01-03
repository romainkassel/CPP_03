/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testScavTrapCopyByConstructor.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 13:54:42 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testConstructorByCopy(ScavTrap scavTrap1) {

	std::cout << std::endl;
	
	// Display of a scavTrap1 attributes

    std::cout << "ScavTrap 1 -> _name : " << scavTrap1.getName() << std::endl;
    std::cout << "ScavTrap 1 -> _hitPoints : " << scavTrap1.getHitPoints() << std::endl;
    std::cout << "ScavTrap 1 -> _energyPoints : " << scavTrap1.getEnergyPoints() << std::endl;
    std::cout << "ScavTrap 1 -> _attackDamage : " << scavTrap1.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	return ;
}

void	testScavTrapCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from ScavTrap" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of a ScavTrap instance (will be copied)
	
	ScavTrap	scavTrap1("ScavTrapName1");
	std::cout << std::endl;

    // Display of a scavTrap1 attributes

    std::cout << "ScavTrap 1 -> _name : " << scavTrap1.getName() << std::endl;
    std::cout << "ScavTrap 1 -> _hitPoints : " << scavTrap1.getHitPoints() << std::endl;
    std::cout << "ScavTrap 1 -> _energyPoints : " << scavTrap1.getEnergyPoints() << std::endl;
    std::cout << "ScavTrap 1 -> _attackDamage : " << scavTrap1.getAttackDamage() << std::endl;
	
	std::cout << std::endl;

	testConstructorByCopy(scavTrap1);

	std::cout << std::endl;
	
	return ;
}