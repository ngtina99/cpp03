/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:58:32 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/10/30 19:05:01 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap Joao("Joao");
	ClapTrap Pedro("Pedro");
	ClapTrap Miguel;
	Miguel = Pedro;

	Joao.attack("Pedro");
	Pedro.takeDamage(0);
	Pedro.takeDamage(42);
	Pedro.attack("Me");
	Pedro.beRepaired(2);
	Pedro.takeDamage(10);
	Miguel.attack("Joao");
	
	ScavTrap scavJoao("scavJoao");
	ScavTrap scavPedro("scavPedro");
	ScavTrap scavMiguel;
	scavMiguel = scavPedro;

	scavJoao.attack("scavPedro");
	scavPedro.takeDamage(0);
	scavPedro.takeDamage(42);
	scavPedro.attack("scavMiguel");
	scavJoao.guardGate();
	scavPedro.guardGate();
	scavPedro.beRepaired(2);
	scavPedro.takeDamage(10);
	scavMiguel.attack("scavJoao");

	FragTrap fragJoao("fragJoao");
	FragTrap fragPedro("fragPedro");
	FragTrap fragMiguel;
	fragMiguel = fragPedro;

	fragJoao.attack("fragPedro");
	fragPedro.takeDamage(0);
	fragPedro.takeDamage(42);
	fragPedro.attack("fragMiguel");
	fragPedro.highFivesGuys();
	fragJoao.highFivesGuys();
	fragPedro.beRepaired(2);
	fragPedro.takeDamage(10);
	fragMiguel.attack("fragJoao");
	return (0);
}