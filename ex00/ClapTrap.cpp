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

// Conditional Check in attack: Currently, after decrementing this->_energyPoints in attack, you still check this->_energyPoints directly after. It would be clearer to add a single else statement after the attack to display the energy and health conditions separately.

// Preventing Negative _hitPoints in takeDamage: Since _hitPoints is unsigned, it may not go negative, but checking if (this->_hitPoints < amount) before the subtraction could prevent overflow issues.

// Consistency in Constructor Messages: In the default constructor, "ClapTrap constructor called with" could be adjusted to "ClapTrap default constructor called with" to match the other constructors.

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &inputName) : _name(inputName), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called with " << this->_name << std::endl;
}

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called with " << this->_name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called with " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) 
	: _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
	std::cout << "ClapTrap copy constructor called with " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "ClapTrap copy assignment operator called with " << this->_name << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
		          << ", causing " << this->_attackDamage << " point(s) of damage!" << std::endl;
		this->_energyPoints--;
	} else if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " point(s) of damage!" << std::endl;
		if (amount >= (unsigned int)(this->_hitPoints)) {
			this->_hitPoints = 0;
		} else {
			this->_hitPoints -= amount;
		}
	} else {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " gains " << amount << " point(s) from repair!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	} else if (this->_hitPoints <= 0) {
		std::cout << "Can't repair: ClapTrap " << this->_name << " is dead!" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
	}
}
