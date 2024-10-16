/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:59:42 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/16 19:59:42 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClaprTrap.hpp"

ClapTrap::ClapTrap(std::string inputName) : _name (inputName), _hitPoints (10), _energyPoints (10), _attackDamage (0) {
	return ;
}

ClaptTrap::ClaptTrap() : _name ("Default"), _hitPoints (10), _energyPoints (10), _attackDamage (0)
{
	return ;
}

ClaptTrap::~ClaptTrap()
{
	 return ;
}

ClapTrap::ClapTrap(const ClapTrap &source) {
    std::cout << "\033[90mCopy constructor ClapTrap called\033[0m" << std::endl;
    *this = source;
}
