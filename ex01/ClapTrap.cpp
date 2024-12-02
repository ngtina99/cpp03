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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &inputName) : _name(inputName), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "ClapTrap constructor called with " << this->_name << std::endl;
}

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
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
