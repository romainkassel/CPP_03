/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testFragTrapCopyByConstructor.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 14:23:33 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testConstructorByCopy(FragTrap fragTrap1) {

	std::cout << std::endl;
	
	// Display of a fragTrap1 attributes

    std::cout << "FragTrap 1 -> _name : " << fragTrap1.getName() << std::endl;
    std::cout << "FragTrap 1 -> _hitPoints : " << fragTrap1.getHitPoints() << std::endl;
    std::cout << "FragTrap 1 -> _energyPoints : " << fragTrap1.getEnergyPoints() << std::endl;
    std::cout << "FragTrap 1 -> _attackDamage : " << fragTrap1.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	return ;
}

void	testFragTrapCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from FragTrap" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of a FragTrap instance (will be copied)
	
	FragTrap	fragTrap1("FragTrapName1");
	std::cout << std::endl;

    // Display of a fragTrap1 attributes

    std::cout << "FragTrap 1 -> _name : " << fragTrap1.getName() << std::endl;
    std::cout << "FragTrap 1 -> _hitPoints : " << fragTrap1.getHitPoints() << std::endl;
    std::cout << "FragTrap 1 -> _energyPoints : " << fragTrap1.getEnergyPoints() << std::endl;
    std::cout << "FragTrap 1 -> _attackDamage : " << fragTrap1.getAttackDamage() << std::endl;
	
	std::cout << std::endl;

	testConstructorByCopy(fragTrap1);

	std::cout << std::endl;
	
	return ;
}