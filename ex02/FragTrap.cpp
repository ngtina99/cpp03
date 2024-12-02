/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:28:55 by ngtina1999        #+#    #+#             */
/*   Updated: 2024/12/02 00:54:25 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name): ClapTrap(name) {
	std::cout << "FragTrap constructor called with " << this->_name << std::endl;
}

//what is there is no name?
FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called with " << this->_name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called with " << this->_name << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called with " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	std::cout << "FragTrap copy assignment operator called with " << this->_name << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys() {
	if (this->_hitPoints <= 0)
		std::cout << "No high five: ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "FragTrap " << this->_name << "requests a high five!";
}
