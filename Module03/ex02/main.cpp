/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:35 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 19:54:35 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp" 

int main( ) {

	FragTrap Empty;
	ClapTrap Julia("JuliaClap");
	ScavTrap Pepe("PepeScav");
	FragTrap Teo("TeoFrag");

	Teo.attack("Miami");
	Teo.takeDamage(50);
	Teo.beRepaired(30);
	Teo.highFivesGuys();

	Pepe.guardGate();
	Pepe.beRepaired(10);
	Pepe.attack("Miami");

	Teo.takeDamage(150);
	Pepe.takeDamage(150);

	Teo.takeDamage(150);
	
	return (0);
}
