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

ClapTrap::ClapTrap(std::string inputName) : _name (inputName), _hitPoints (10), _energyPoints (10), _attackDamage (0) {
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
	return ;
}

ClapTrap::ClapTrap() : _name ("Default"), _hitPoints (10), _energyPoints (10), _attackDamage (0) {
	std::cout << "ClapTrap " << this->_name << " created with default constructor." << std::endl;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
	 return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) 
	: _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
	std::cout << "ClapTrap " << this->_name << " copied." << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "\033[90mAssignment operator called\033[0m" << std::endl;
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
	
	if (this->_energy_points && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " point(s) of damage!" << std::endl;
		this->_energy_points--;
	}
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " point(s) of damage!" << std::endl;
		this->_hp -= amount;
	}
	else
		std::cout << "STOP! ClapTrap " << this->_name << " is already dead :(" << std::endl;
	if (this->_hp < 0)
		this->_hp = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
if (this->_hp > 0 && this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " healed " << amount << " point(s)." << std::endl;
		this->_hp += amount;
		this->_energy_points--;
	}
	if (this->_hp <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->_name << " is dead." << std::endl;
	else if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

std::string const	&ClapTrap::get_name(void) const
{
	return (this->_name);
}

int const	&ClapTrap::get_hp(void) const
{
	return (this->_hp);
}

int const	&ClapTrap::get_energy_points(void) const
{
	return (this->_energy_points);
}

int const	&ClapTrap::get_damage(void) const
{
	return (this->_damage);
}

void	ClapTrap::set_name(std::string const &name)
{
	this->_name = name;
}

void	ClapTrap::set_hp(int const &value)
{
	this->_hp = value;
}

void	ClapTrap::set_energy_points(int const &value)
{
	this->_energy_points = value;
}

void	ClapTrap::set_damage(int const &value)
{
	this->_damage = value;
}