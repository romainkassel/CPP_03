/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:03:28 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 14:02:07 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H__
#define __HEADER_H__

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

// Tests copy by affectation 

void    testClapTrapCopyByAffectation();
void    testScavTrapCopyByAffectation();
void    testFragTrapCopyByAffectation();

// Tests copy by constructor 

void    testClapTrapCopyByConstructor();
void    testScavTrapCopyByConstructor();
void    testFragTrapCopyByConstructor();

#endif