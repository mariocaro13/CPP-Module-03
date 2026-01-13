/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:44:12 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/13 23:20:10 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("DefaultScav")
{
	setHitPoints(defaultHitPoints);
	setEnergyPoints(defaultEnergyPoints);
	setAttackDamage(defaultAttackDamage);
	std::cout << getClassName() << " " << getName() << " constructed with default values." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	setHitPoints(defaultHitPoints);
	setEnergyPoints(defaultEnergyPoints);
	setAttackDamage(defaultAttackDamage);
	std::cout << getClassName() << " " << getName() << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << getClassName() << ": " << getName() << " copy constructed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << getClassName() << ": " << this->getName() << " assigned." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << getClassName() << ": " << getName() << " destructed." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << getClassName() << ": " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << getClassName() << ": " << getName() << " has no energy or HP left to attack." << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << getClassName() << ": " << getName() << " is now in Gate Keeper mode." << std::endl;
}

std::string ScavTrap::getClassName(void) const
{
	return ("ScavTrap");
}
