/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testDiamondTrapCopyByConstructor.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 00:25:03 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testConstructorByCopy(DiamondTrap diamondTrap1) {

	std::cout << std::endl;
	
	// Display of a diamondTrap1 attributes

    std::cout << "DiamondTrap 1 -> _name : " << diamondTrap1.getName() << std::endl;
    std::cout << "DiamondTrap 1 -> _hitPoints : " << diamondTrap1.getHitPoints() << std::endl;
    std::cout << "DiamondTrap 1 -> _energyPoints : " << diamondTrap1.getEnergyPoints() << std::endl;
    std::cout << "DiamondTrap 1 -> _attackDamage : " << diamondTrap1.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	return ;
}

void	testDiamondTrapCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from DiamondTrap" << std::endl;
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

	testConstructorByCopy(diamondTrap1);

	std::cout << std::endl;
	
	return ;
}