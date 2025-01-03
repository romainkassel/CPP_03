/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 13:29:45 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Header.hpp"

int	main( void ) {

	std::cout << std::endl;

	ClapTrap	player1( "John" );
	ClapTrap	player2( "Brigitte" );

	std::cout << std::endl;

	while (player1.getEnergyPoints() > 0 && player2.getEnergyPoints() > 0)
	{
		player1.attack( player2.getName() );
		player2.takeDamage( player1.getAttackDamage() );
		player2.beRepaired( 1 );
	}
	
	player1.attack( player2.getName() );
	player2.beRepaired( 1 );

	// Tests copy by affectation

	testClapTrapCopyByAffectation();

	// Tests copy by constructor

	testClapTrapCopyByConstructor();
	
	return (0);
}