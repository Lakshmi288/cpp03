/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:19:59 by lps               #+#    #+#             */
/*   Updated: 2024/08/30 12:19:15 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "\033[33m" << std::endl << "Showing ClapTrap constructors" << "\033[0m" << std::endl;
	ClapTrap bernd("Bernd");
	std::cout << "\033[33m" << std::endl << "Tests for ClapTrap points" << "\033[0m" << std::endl;
	std::cout << "Bernd has " << bernd.get_hit_points() << " hit points and " << bernd.get_energy_points() << " energy points left" << std::endl;
	bernd.attack("house");
	bernd.takeDamage(5);
	bernd.beRepaired(5);
	std::cout << "Bernd has " << bernd.get_hit_points() << " hit points and " << bernd.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Deconstructor calling" << "\033[0m" << std::endl;

	return (0);
}
