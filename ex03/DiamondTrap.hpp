#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap {

	public:
		DiamondTrap();
		FragTrap(std::string const &name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap &operator=(DiamondTrap const &rhs);

		void attack(const std::string &target);		
		void whoAmI();

	private:
		str::string _name;

};

#endif