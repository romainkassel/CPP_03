/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testDiamondTrapCopyByAffectation.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 00:09:23 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testDiamondTrapCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from DiamondTrap" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
		
	// Creation of a DiamondTrap instance (will be copied)
	
	DiamondTrap	diamondTrap1("DiamondTrapName1");
	std::cout << std::endl;

    // Display of a diamondTrap1 attributes

    std::cout << "DiamondTrap 1 -> _name : " << diamondTrap1.getName() << std::endl;
    std::cout << "DiamondTrap 1 -> _hitPoints : " << diamondTrap1.getHitPoints() << std::endl;
    std::cout << "DiamondTrap 1 -> _energyPoints : " << diamondTrap1.getEnergyPoints() << std::endl;
    std::cout << "DiamondTrap 1 -> _attackDamage : " << diamondTrap1.getAttackDamage() << std::endl;
	
	std::cout << std::endl;

	// Creation of a DiamondTrap instance (copy)
	
	DiamondTrap	diamondTrap2;
    
    std::cout << std::endl;
    
	diamondTrap2 = diamondTrap1;

    // Display of a diamondTrap2 attributes

    std::cout << "DiamondTrap 2 -> _name : " << diamondTrap2.getName() << std::endl;
    std::cout << "DiamondTrap 2 -> _hitPoints : " << diamondTrap2.getHitPoints() << std::endl;
    std::cout << "DiamondTrap 2 -> _energyPoints : " << diamondTrap2.getEnergyPoints() << std::endl;
    std::cout << "DiamondTrap 2 -> _attackDamage : " << diamondTrap2.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	return ;
}