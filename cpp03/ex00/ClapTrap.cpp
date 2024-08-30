/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:19:41 by lps               #+#    #+#             */
/*   Updated: 2024/08/29 16:39:04 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructors
ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called"<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor called" << std::endl;
}

// member functions
void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << this->_name << " is already dead and can not attack someone." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << "Not enough energy points for attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0 && amount != 0)
		std::cout << this->_name << " is already dead and can not be more demaged." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
		if (amount > this->_hit_points)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << this->_name << " is already dead and can not be rapaired." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " got " << amount << " points of hit points!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points -= 1;
	}
	else
		std::cout << "Not enough energy points for being repaired" << std::endl;
}

int ClapTrap::get_hit_points()
{
	return (this->_hit_points);
}

int ClapTrap::get_energy_points()
{
	return (this->_energy_points);
}
