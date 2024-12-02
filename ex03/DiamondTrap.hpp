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

Name, which is passed as parameter to a constructor
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (Scavtrap)
9
C++ - Module 03 Inheritance
In addition to the special functions of both its parent classes, DiamondTrap will have
its own special capacity:
void whoAmI();};

#endif