/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:01:04 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/16 20:01:04 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name) {
	std::cout << "ScavTrap default constructor called with " << this->_name << std::endl;
}


//what is there is no name?
ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called with " << this->_name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrao destructor called with " << this->_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called with " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << "ScavTrap copy assignment operator called with " << this->_name << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::guardGate() {
	if (this->_hitPoints <= 0)
		std::cout << "Cannot switch to gate-keeper mode because: ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->_name << " switched to mode: \"Guard Gate\"." << std::endl;
}