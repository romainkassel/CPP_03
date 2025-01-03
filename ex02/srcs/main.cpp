/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 14:25:03 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "Header.hpp"
#include <iostream>

void testConstructorByCopy( ClapTrap player1, ClapTrap player2, ScavTrap player3, ScavTrap player4, FragTrap player5, FragTrap player6 )
{
	std::cout << std::endl;
	
	std::cout << "player1 - > name : " << player1.getName() << std::endl;
	std::cout << "player1 - > _hitPoints : " << player1.getHitPoints() << std::endl;
	std::cout << "player1 - > _energyPoints : " << player1.getEnergyPoints() << std::endl;
	std::cout << "player1 - > _attackDamage : " << player1.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	std::cout << "player2 - > name : " << player2.getName() << std::endl;
	std::cout << "player2 - > _hitPoints : " << player2.getHitPoints() << std::endl;
	std::cout << "player2 - > _energyPoints : " << player2.getEnergyPoints() << std::endl;
	std::cout << "player2 - > _attackDamage : " << player2.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "player3 - > name : " << player3.getName() << std::endl;
	std::cout << "player3 - > _hitPoints : " << player3.getHitPoints() << std::endl;
	std::cout << "player3 - > _energyPoints : " << player3.getEnergyPoints() << std::endl;
	std::cout << "player3 - > _attackDamage : " << player3.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "player4 - > name : " << player4.getName() << std::endl;
	std::cout << "player4 - > _hitPoints : " << player4.getHitPoints() << std::endl;
	std::cout << "player4 - > _energyPoints : " << player4.getEnergyPoints() << std::endl;
	std::cout << "player4 - > _attackDamage : " << player4.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "player5 - > name : " << player5.getName() << std::endl;
	std::cout << "player5 - > _hitPoints : " << player5.getHitPoints() << std::endl;
	std::cout << "player5 - > _energyPoints : " << player5.getEnergyPoints() << std::endl;
	std::cout << "player5 - > _attackDamage : " << player5.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "player6 - > name : " << player6.getName() << std::endl;
	std::cout << "player6 - > _hitPoints : " << player6.getHitPoints() << std::endl;
	std::cout << "player6 - > _energyPoints : " << player6.getEnergyPoints() << std::endl;
	std::cout << "player6 - > _attackDamage : " << player6.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	return ;
}


int	main( void ) {

	std::cout << std::endl;
	ClapTrap	player1( "John" );
	ClapTrap	player2( "Brigitte" );
	ScavTrap	player3( "Mireille" );
	ScavTrap	player4( "Robert" );
	FragTrap	player5( "Philippe" );
	FragTrap	player6( "Bernadette" );

	std::cout << std::endl;
	testConstructorByCopy( player1, player2, player3, player4, player5, player6);
	std::cout << std::endl;

	player3.guardGate();
	player4.guardGate();

	std::cout << std::endl;

	player5.highFivesGuys();
	player6.highFivesGuys();

	std::cout << std::endl;

	player1.attack( player2.getName() );
	player2.takeDamage( player1.getAttackDamage() );
	player2.beRepaired( 1 );
	player3.attack( player4.getName() );
	player4.takeDamage( player3.getAttackDamage() );
	player4.beRepaired( 5 );

	while (player5.getEnergyPoints() > 0 && player6.getEnergyPoints() > 0
		&& player6.getHitPoints() > 0)
	{
		player5.attack( player6.getName() );
		player6.takeDamage( player5.getAttackDamage() );
		player6.beRepaired( 1 );
	}

	// Tests copy by affectation 

	testClapTrapCopyByAffectation();
	testScavTrapCopyByAffectation();
	testFragTrapCopyByAffectation();

	// Tests copy by constructor 

	testClapTrapCopyByConstructor();
	testScavTrapCopyByConstructor();
	testFragTrapCopyByConstructor();
	
	return (0);
}