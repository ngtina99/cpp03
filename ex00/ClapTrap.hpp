/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClaptTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:38 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/16 19:59:38 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string const &name);
		~ClapTrap();
		ClapTrap( ClapTrap const &src );
		ClapTrap	&operator=( ClapTrap const &rhs );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:

		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

};

#endif
