/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:03:28 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 23:49:56 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H__
#define __HEADER_H__

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

// Tests copy by affectation 

void    testClapTrapCopyByAffectation();
void    testScavTrapCopyByAffectation();
void    testFragTrapCopyByAffectation();
void    testDiamondTrapCopyByAffectation();

// Tests copy by constructor 

void    testClapTrapCopyByConstructor();
void    testScavTrapCopyByConstructor();
void    testFragTrapCopyByConstructor();
void    testDiamondTrapCopyByConstructor();

#endif