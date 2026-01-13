/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:17:27 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/13 23:04:13 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	serena("Serena");
	ClapTrap	bob("Bob");

	std::cout << "\n--- Normal Attacks ---"<< std::endl;
	serena.attack("Bob");
	bob.takeDamage(serena.getAttackDamage());

	std::cout << "\n--- ScavTrap special ability ---"<< std::endl;
	serena.guardGate();

	std::cout << "\n--- Normal Repairing ---"<< std::endl;
	serena.beRepaired(5);

	std::cout << "\n--- Bob takes lethal damage ---"<< std::endl;
	bob.takeDamage(bob.getHitPoints() + 10);

	std::cout << "\n--- Bob tries to act while dead ---"<< std::endl;
	bob.attack("Serena");
	bob.beRepaired(5);

	std::cout << "\n--- Serena spends all her energy ---"<< std::endl;
	while (serena.getEnergyPoints() > 0)
	{
		std::cout << "Serena's energy points: " << serena.getEnergyPoints() << std::endl;
		serena.attack("Bob");
	}

	std::cout << "\n--- Serena tries to act with no energy ---"<< std::endl;
	serena.attack("Bob");
	serena.beRepaired(5);

	std::cout << std::endl;

	return (0);
}
