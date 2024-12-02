/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DimaondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:01:04 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/12/02 06:13:55 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap constructor called with " << this->_name << std::endl;
	this->name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_eneryPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap() :ClapTrap("default_clap_trap"){
	std::cout << "DiamondTrap default constructor called with " << this->_name << std::endl;
	this->name = "Default_diamond_trip";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_eneryPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called with " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src) {
	std::cout << "DiamondTrap copy constructor called with " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	std::cout << "DiamondTrap copy assignment operator called with " << this->_name << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name + "_clap_trap";
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << this->_name << " and " 
	<< "ClapTrap " << ClapTrap::_name << " ." << std::endl;
}
