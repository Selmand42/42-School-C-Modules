#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " has been created!" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has been destroyed." << std::endl;
}


void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << ": Hihg fives guys!" << std::endl;
}
