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

	for (int count = 0; count < 9; count++) {
		Joao.attack("Miguel");
	}
	Pedro.takeDamage(3);
	Pedro.beRepaired(1);
	Pedro.takeDamage(2);
	Joao.checkStatus();
	Pedro.checkStatus();
	return (0);
}
