/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:21:41 by lps               #+#    #+#             */
/*   Updated: 2024/08/30 11:24:34 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap : public ClapTrap
{
		
	public:
		// constructors
		ScavTrap();
		ScavTrap(const std::string name);
		~ScavTrap();

		// member functions
		void attack(const std::string &target);
		void guardGate(void);
};

#endif
