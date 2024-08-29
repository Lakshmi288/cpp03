/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:20:43 by lps               #+#    #+#             */
/*   Updated: 2024/08/29 12:20:44 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constructors
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap: Default constructor called\n";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_is_guardgate = false;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: Name constructor called\n";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_is_guardgate = false;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap: Copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	
	std::cout << "ScavTrap: Copy assignment constructor called\n";
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	this->_is_guardgate = other._is_guardgate;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Deconstructor called\n";
}

// member functions
void ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "ScavTrap: " << this->_name << " is already dead and can not attack someone." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ScavTrap: " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << "ScavTrap: Not enough energy points for attack" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_is_guardgate == false)
	{
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
		this->_is_guardgate = true;
	}
	else
	{
		std::cout << "ScavTrap is not anymore in Gate keeper mode" << std::endl;
		this->_is_guardgate = false;
	}
}
