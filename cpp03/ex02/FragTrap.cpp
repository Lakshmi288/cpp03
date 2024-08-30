/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:22:12 by lps               #+#    #+#             */
/*   Updated: 2024/08/29 16:46:42 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// constructors
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: Default constructor called\n";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Name constructor called\n";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Deconstructor called\n";
}

// member functions
void FragTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "FragTrap: " << this->_name << " is already dead and can not attack someone." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << "FragTrap: Not enough energy points for attack" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points > 0)
		std::cout << "FragTrap wants to see a high five!" << std::endl;
	else
		std::cout << "FragTrap wants to see a high five, but he is already dead :(" << std::endl;
}
