/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:58:32 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/02 06:23:12 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

	std::cout 
	<< "\n==============================\n"
	<< "      ClapTrap Tests         \n"
	<< "==============================\n" 
	<< std::endl;

	ClapTrap Joao("Joao");
	ClapTrap Pedro("Pedro");

	for (int count = 0; count < 9; count++) {
		Joao.attack("Miguel");
	}
	Pedro.takeDamage(3);
	Pedro.beRepaired(1);
	Pedro.takeDamage(2);
	Joao.checkStatus();
	Pedro.checkStatus();
	
	std::cout 
	<< "\n==============================\n"
	<< "      ScavTrap Tests         \n"
	<< "==============================\n" 
	<< std::endl;

	ScavTrap ScavJoao("ScavJoao");
	ScavTrap ScavPedro("ScavPedro");

	for (int count = 0; count < 9; count++) {
		ScavJoao.attack("ScavMiguel");
	}
	ScavPedro.takeDamage(3);
	ScavPedro.beRepaired(1);
	ScavPedro.takeDamage(2);
	ScavPedro.guardGate();
	ScavJoao.checkStatus();
	ScavPedro.checkStatus();


	std::cout 
	<< "\n==============================\n"
	<< "      FragTrap Tests         \n"
	<< "==============================\n" 
	<< std::endl;

	FragTrap FragJoao("FragJoao");
	FragTrap FragPedro("FragPedro");

	for (int count = 0; count < 9; count++) {
		FragJoao.attack("FragMiguel");
	}
	FragPedro.takeDamage(3);
	FragPedro.beRepaired(1);
	FragPedro.takeDamage(2);
	FragPedro.highFivesGuys();
	FragJoao.checkStatus();
	FragPedro.checkStatus();
	return (0);
}