/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 13:56:54 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "Header.hpp"
#include <iostream>

void testConstructorByCopy( ClapTrap player1, ClapTrap player2, ScavTrap player3, ScavTrap player4 )
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
	
	return ;
}


int	main( void ) {

	std::cout << std::endl;
	
	ClapTrap	player1( "John" );
	ClapTrap	player2( "Brigitte" );
	ScavTrap	player3( "Mireille" );
	ScavTrap	player4( "Robert" );

	std::cout << std::endl;
	testConstructorByCopy( player1, player2, player3, player4 );
	std::cout << std::endl;

	player3.guardGate();
	player4.guardGate();

	std::cout << std::endl;

	while (player1.getEnergyPoints() > 0 && player2.getEnergyPoints() > 0
		&& player3.getEnergyPoints() > 0 && player4.getHitPoints() > 0)
	{
		player1.attack( player2.getName() );
		player2.takeDamage( player1.getAttackDamage() );
		player2.beRepaired( 1 );
		player3.attack( player4.getName() );
		player4.takeDamage( player3.getAttackDamage() );
		player4.beRepaired( 5 );
	}

	// Tests copy by affectation 

	testClapTrapCopyByAffectation();
	testScavTrapCopyByAffectation();

	// Tests copy by constructor 

	testClapTrapCopyByConstructor();
	testScavTrapCopyByConstructor();
	
	return (0);
}