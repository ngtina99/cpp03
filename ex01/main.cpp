/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:55:20 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/10/30 17:01:20 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

	scavJoao.attack("Pedro");
	scavPedro.takeDamage(0);
	scavPedro.takeDamage(42);
	scavPedro.attack("Miguel");
	scavPedro.beRepaired(2);
	scavPedro.takeDamage(10);
	scavMiguel.attack("scavJoao");
	return (0);
}