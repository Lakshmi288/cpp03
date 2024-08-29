/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:22:41 by lps               #+#    #+#             */
/*   Updated: 2024/08/29 16:53:55 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap : public ClapTrap
{
	private:
		bool _is_guardgate;
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
