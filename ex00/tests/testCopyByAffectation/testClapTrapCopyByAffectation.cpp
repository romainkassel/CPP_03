/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testClapTrapCopyByAffectation.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 13:23:17 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testClapTrapCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from ClapTrap" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	
	// Creation of a ClapTrap instance (will be copied)
	
	ClapTrap	clapTrap1("ClapTrapName1");
	std::cout << std::endl;

    // Display of a clapTrap1 attributes

    std::cout << "ClapTrap 1 -> _name : " << clapTrap1.getName() << std::endl;
    std::cout << "ClapTrap 1 -> _hitPoints : " << clapTrap1.getHitPoints() << std::endl;
    std::cout << "ClapTrap 1 -> _energyPoints : " << clapTrap1.getEnergyPoints() << std::endl;
    std::cout << "ClapTrap 1 -> _attackDamage : " << clapTrap1.getAttackDamage() << std::endl;
	
	std::cout << std::endl;

	// Creation of a ClapTrap instance (copy)
	
	ClapTrap	clapTrap2;
    
    std::cout << std::endl;
    
	clapTrap2 = clapTrap1;

    // Display of a clapTrap2 attributes

    std::cout << "ClapTrap 2 -> _name : " << clapTrap2.getName() << std::endl;
    std::cout << "ClapTrap 2 -> _hitPoints : " << clapTrap2.getHitPoints() << std::endl;
    std::cout << "ClapTrap 2 -> _energyPoints : " << clapTrap2.getEnergyPoints() << std::endl;
    std::cout << "ClapTrap 2 -> _attackDamage : " << clapTrap2.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	return ;
}