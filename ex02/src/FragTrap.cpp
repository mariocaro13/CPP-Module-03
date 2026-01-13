/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:33:24 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/13 23:35:11 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("DefaultFrag")
{
	setHitPoints(defaultHitPoints);
	setEnergyPoints(defaultEnergyPoints);
	setAttackDamage(defaultAttackDamage);
	std::cout << getClassName() << ": " << getName() << " constructed with default values." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	setHitPoints(defaultHitPoints);
	setEnergyPoints(defaultEnergyPoints);
	setAttackDamage(defaultAttackDamage);
	std::cout << getClassName() << ": " << getName() << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << getClassName() << ": " << getName() << " copy constructed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << getClassName() << ": " << this->getName() << " assigned." << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << getClassName() << ": " << getName() << " destructed." << std::endl;
}

void FragTrap::attack(const std::string& target)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << getClassName() << ": " << getName() << " is requesting a positive high five!" << std::endl;
}

std::string FragTrap::getClassName(void) const
{
	return ("FragTrap");
}
