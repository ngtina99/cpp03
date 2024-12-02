/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:28:55 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/02 05:46:12 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name) {
	std::cout << "ScavTrap constructor called with " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap() :ClapTrap(){
	std::cout << "ScavTrap default constructor called with " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrao destructor called with " << this->_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called with " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << "ScavTrap copy assignment operator called with " << this->_name << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target 
				  << ", causing " << this->_attackDamage << " point(s) of damage!" << std::endl;
			this->_energyPoints--;
	} else if (this->_hitPoints == 0) {
		std::cout << "ScavTrap " << this->_name << " is dead (out of hit points)!" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << "ScavTrap " << this->_name << " is out of energy points!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is in a Gate keeper mode" << std::endl;
}
