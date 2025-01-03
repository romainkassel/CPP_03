/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testFragTrapCopyByAffectation.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 14:14:54 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testFragTrapCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from FragTrap" << std::endl;
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

	// Creation of a FragTrap instance (copy)
	
	FragTrap	fragTrap2;
    
    std::cout << std::endl;
    
	fragTrap2 = fragTrap1;

    // Display of a fragTrap2 attributes

    std::cout << "FragTrap 2 -> _name : " << fragTrap2.getName() << std::endl;
    std::cout << "FragTrap 2 -> _hitPoints : " << fragTrap2.getHitPoints() << std::endl;
    std::cout << "FragTrap 2 -> _energyPoints : " << fragTrap2.getEnergyPoints() << std::endl;
    std::cout << "FragTrap 2 -> _attackDamage : " << fragTrap2.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	return ;
}