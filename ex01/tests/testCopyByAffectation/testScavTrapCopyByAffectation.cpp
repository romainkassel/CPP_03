/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testScavTrapCopyByAffectation.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 13:48:14 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testScavTrapCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from ScavTrap" << std::endl;
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

	// Creation of a ScavTrap instance (copy)
	
	ScavTrap	scavTrap2;
    
    std::cout << std::endl;
    
	scavTrap2 = scavTrap1;

    // Display of a scavTrap2 attributes

    std::cout << "ScavTrap 2 -> _name : " << scavTrap2.getName() << std::endl;
    std::cout << "ScavTrap 2 -> _hitPoints : " << scavTrap2.getHitPoints() << std::endl;
    std::cout << "ScavTrap 2 -> _energyPoints : " << scavTrap2.getEnergyPoints() << std::endl;
    std::cout << "ScavTrap 2 -> _attackDamage : " << scavTrap2.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	return ;
}