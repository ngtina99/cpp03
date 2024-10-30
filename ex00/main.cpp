/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:45 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/16 19:59:45 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Joao("Joao");
	ClapTrap Pedro("Pedro");
	ClapTrap Miguel;
	Miguel = Pedro;

	Joao.attack("Pedro");
	Pedro.takeDamage(0);
	Pedro.takeDamage(42);
	Pedro.attack("Miguel");
	Pedro.beRepaired(2);
	Pedro.takeDamage(10);
	Miguel.attack("Joao");
	return (0);
}
