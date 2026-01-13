/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:42:18 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/13 23:14:37 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		static const int defaultHitPoints = 100;
		static const int defaultEnergyPoints = 50;
		static const int defaultAttackDamage = 20;

		ScavTrap(void);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &rhs);
		~ScavTrap(void);

		ScavTrap(const std::string &name);

		void attack(const std::string &target);
		
		void guardGate(void);
		
		std::string getClassName(void) const;
};

#endif
