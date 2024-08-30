/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:20:31 by lps               #+#    #+#             */
/*   Updated: 2024/08/29 16:11:59 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap constructor" << "\033[0m" << std::endl;
	
	FragTrap tom("Tom");
	
	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap functions" << "\033[0m" << std::endl;
	tom.highFivesGuys();

	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;

	std::cout << "\033[33m" << std::endl << "Tests for more ScavTrap functions" << "\033[0m" << std::endl;
	tom.takeDamage(2
	);
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;

	tom.beRepaired(2);
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Deconstructor calling" << "\033[0m" << std::endl;

	return (0);
}
