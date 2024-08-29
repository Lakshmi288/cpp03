/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:22:01 by lps               #+#    #+#             */
/*   Updated: 2024/08/29 12:22:03 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructors
ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Name constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other) :  _name(other._name), _hit_points(other._hit_points),
	_energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap Copy constructor called\n";
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	std::cout << "ClapTrap Copy assignment constructor called\n";
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor called\n";
}

// member functions
void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << this->_name << " is already dead and can not attack someone." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
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

// additional member functions
unsigned int ClapTrap::get_hit_points() const
{
	return (this->_hit_points);
}

void ClapTrap::set_hit_points(unsigned int number)
{
	this->_hit_points = number;
}

unsigned int ClapTrap::get_energy_points() const
{
	return (this->_energy_points);
}

void ClapTrap::set_energy_points(unsigned int number)
{
	this->_energy_points = number;
}

std::string ClapTrap::get_name() const
{
	return (this->_name);
}

void ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

unsigned int ClapTrap::get_attack_damage() const
{
	return (this->_attack_damage);
}

void ClapTrap::set_attack_damage(unsigned int number)
{
	this->_attack_damage = number;
}
