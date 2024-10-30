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

ClapTrap::ClapTrap(std::string const &inputName) : _name (inputName), _hitPoints (10), _energyPoints (10), _attackDamage (0) {
	std::cout << "ClapTrap default constructor called with " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap() : _name ("Default"), _hitPoints (10), _energyPoints (10), _attackDamage (0) {
	std::cout << "ClapTrap constructor called with " << this->_name << std::endl;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called with " << this->_name << std::endl;
	 return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) 
	: _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
	std::cout << "ClapTrap Copy constructor called with " << this->_name << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "Claptrap Copy Assignment operator called with " << this->_name << std::endl;
	if (&rhs != this)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	
	if (this->_energyPoints && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point(s) of damage!" << std::endl;
		this->_energyPoints--;
	}
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energyPoints)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " point(s) of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "STOP! ClapTrap " << this->_name << " is already dead :(" << std::endl;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
if (this->_hitPoints > 0 && this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " healed " << amount << " point(s)." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	if (this->_hitPoints <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->_name << " is dead." << std::endl;
	else if (!this->_energyPoints)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

std::string const	&ClapTrap::getName(void) const
{
	return (this->_name);
}

int const	&ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int const	&ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int const	&ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void	ClapTrap::setName(std::string const &name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(int const &value)
{
	this->_hitPoints = value;
}

void	ClapTrap::setEnergyPoints(int const &value)
{
	this->_energyPoints = value;
}

void	ClapTrap::setAttackDamage(int const &value)
{
	this->_attackDamage = value;
}