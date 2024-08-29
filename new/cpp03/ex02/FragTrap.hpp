/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:22:17 by lps               #+#    #+#             */
/*   Updated: 2024/08/29 16:54:17 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class FragTrap : public ClapTrap
{
	public:
		// constructors
		FragTrap();
		FragTrap(const std::string name);
		~FragTrap();

		// member functions
		void attack(const std::string &target);
		void highFivesGuys(void);
};

#endif
