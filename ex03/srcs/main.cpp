/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/20 00:25:54 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "Header.hpp"
#include <iostream>

void testConstructorByCopy( DiamondTrap player7, DiamondTrap player8 )
{
	std::cout << std::endl;

	player7.whoAmI();
	std::cout << "player7 - > _hitPoints : " << player7.getHitPoints() << std::endl;
	std::cout << "player7 - > _energyPoints : " << player7.getEnergyPoints() << std::endl;
	std::cout << "player7 - > _attackDamage : " << player7.getAttackDamage() << std::endl;
	std::cout << std::endl;
	player7.attack( player8.getName() );
	std::cout << "******************************************************************" << std::endl;
	std::cout << std::endl;

	// Other member functions 

	player8.takeDamage( player7.getAttackDamage() );
	player8.beRepaired( 1 );
	std::cout << "******************************************************************" << std::endl;
	std::cout << std::endl;
	player7.highFivesGuys();
	player7.guardGate();

	std::cout << std::endl;
	
	return ;
}


int	main( void ) {

	std::cout << std::endl;
	DiamondTrap	player7( "Shrek" );
	std::cout << std::endl;
	DiamondTrap	player8( "Mickey" );

	std::cout << std::endl;

	player7.whoAmI();
	std::cout << "player7 - > _hitPoints : " << player7.getHitPoints() << std::endl;
	std::cout << "player7 - > _energyPoints : " << player7.getEnergyPoints() << std::endl;
	std::cout << "player7 - > _attackDamage : " << player7.getAttackDamage() << std::endl;
	std::cout << std::endl;
	player7.attack( player8.getName() );
	std::cout << "******************************************************************" << std::endl;
	std::cout << std::endl;

	// Other member functions 

	player8.takeDamage( player7.getAttackDamage() );
	player8.beRepaired( 1 );
	std::cout << "******************************************************************" << std::endl;
	std::cout << std::endl;
	player7.highFivesGuys();
	player7.guardGate();

	std::cout << std::endl;
	std::cout << "***** testConstructorByCopy *****" << std::endl;
	std::cout << std::endl;
	testConstructorByCopy( player7, player8 );
	std::cout << std::endl;

	// Tests copy by affectation

	testClapTrapCopyByAffectation();
	testScavTrapCopyByAffectation();
	testFragTrapCopyByAffectation();
	testDiamondTrapCopyByAffectation();

	// Tests copy by constructor

	testClapTrapCopyByConstructor();
	testScavTrapCopyByConstructor();
	testFragTrapCopyByConstructor();
	testDiamondTrapCopyByConstructor();
	
	return (0);
}