/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:02:38 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/13 21:35:47 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name(DEFAULT_NAME), _hitPoints(DEFAULT_HIT_POINTS), _energyPoints(DEFAULT_ENERGY_POINTS), _attackDamage(DEFAULT_ATTACK_DAMAGE)
{
	std::cout << MSG_CLASS_NAME << this->_name << " constructed with default values." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _hitPoints(DEFAULT_HIT_POINTS), _energyPoints(DEFAULT_ENERGY_POINTS), _attackDamage(DEFAULT_ATTACK_DAMAGE)
{
	std::cout << MSG_CLASS_NAME << this->_name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << MSG_CLASS_NAME << this->_name << " copy constructed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << MSG_CLASS_NAME << this->_name << " assigned." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << MSG_CLASS_NAME << this->_name << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << MSG_CLASS_NAME << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << MSG_CLASS_NAME << _name << " has no energy or HP left to attack." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << MSG_CLASS_NAME << _name << " takes " << amount << " points of damage! Remaining HP: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << MSG_CLASS_NAME << _name << " is repaired by " << amount << " points! Current HP: " << _hitPoints << std::endl;
	}
	else
	{
		std::cout << MSG_CLASS_NAME << _name << " has no energy or HP left to repair." << std::endl;
	}
}
