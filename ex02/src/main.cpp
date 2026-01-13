/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:17:27 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/14 00:16:10 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\n----- CONSTRUCTION TEST -----\n"<< std::endl;
	ClapTrap	dummy("Dummy");
	ClapTrap	bob("Bob");
	ScavTrap	serena("Serena");
	FragTrap	freddie("Freddie");

	dummy.setAttackDamage(0);
	dummy.setHitPoints(10000);
	dummy.setEnergyPoints(10000);

	std::cout << "\n----- BASICS TEST -----"<< std::endl;

	std::cout << "\n--- Normal Attacks ---"<< std::endl;
	bob.attack("Dummy");
	dummy.takeDamage(bob.getAttackDamage());
	std::cout << std::endl;

	serena.attack("Dummy");
	dummy.takeDamage(serena.getAttackDamage());
	std::cout << std::endl;

	freddie.attack("Dummy");
	dummy.takeDamage(freddie.getAttackDamage());
	std::cout << std::endl;

	std::cout << "\n--- Normal Repairing ---"<< std::endl;
	bob.beRepaired(ClapTrap::defaultHitPoints);
	serena.beRepaired(ScavTrap::defaultHitPoints);
	freddie.beRepaired(FragTrap::defaultHitPoints);

	std::cout << "\n--- Lethal damage ---"<< std::endl;
	bob.takeDamage(bob.getHitPoints() + 10);
	serena.takeDamage(serena.getHitPoints() + 10);
	freddie.takeDamage(freddie.getHitPoints() + 10);

	std::cout << "\n--- Try to act while dead ---"<< std::endl;
	bob.attack("Dummy");
	serena.attack("Dummy");
	freddie.attack("Dummy");

	std::cout << "\n--- Spends all energy ---"<< std::endl;

	bob.setHitPoints(ClapTrap::defaultHitPoints);
	bob.setEnergyPoints(ClapTrap::defaultEnergyPoints);
	while (bob.getEnergyPoints() > 0)
	{
		bob.attack("Dummy");
	}
	std::cout << std::endl;

	serena.setHitPoints(ScavTrap::defaultHitPoints);
	serena.setEnergyPoints(ScavTrap::defaultEnergyPoints);
	while (serena.getEnergyPoints() > 0)
	{
		serena.attack("Dummy");
	}
	std::cout << std::endl;

	freddie.setHitPoints(FragTrap::defaultHitPoints);
	freddie.setEnergyPoints(FragTrap::defaultEnergyPoints);
	while (freddie.getEnergyPoints() > 0)
	{
		freddie.attack("Dummy");
	}
	std::cout << std::endl;
	
	std::cout << "\n--- Try to act with no energy ---"<< std::endl;
	bob.attack("Dummy");
	bob.beRepaired(5);
	std::cout << std::endl;

	serena.attack("Dummy");
	serena.beRepaired(5);
	std::cout << std::endl;

	freddie.attack("Dummy");
	freddie.beRepaired(5);
	std::cout << std::endl;

	std::cout << "\n----- SCAVTRAP TEST -----"<< std::endl;

	std::cout << "\n--- ScavTrap special ability ---"<< std::endl;
	serena.guardGate();

	std::cout << "\n----- FRAGTRAP TEST -----"<< std::endl;

	std::cout << "\n--- FragTrap special ability ---"<< std::endl;
	freddie.highFivesGuys();

	std::cout << "\n----- End of simulation -----"<< std::endl;

	return (0);
}
