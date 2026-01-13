/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:17:27 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/13 21:26:47 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	bob("Bob");
	ClapTrap	alice("Alice");

	std::cout << "\n--- Normal Attacks ---"<< std::endl;
	bob.attack("Alice");
	alice.takeDamage(3);

	std::cout << "\n--- Normal Repairing ---"<< std::endl;
	alice.beRepaired(5);

	std::cout << "\n--- Bob takes lethal damage ---"<< std::endl;
	bob.takeDamage(15);

	std::cout << "\n--- Bob tries to act while dead ---"<< std::endl;
	bob.attack("Alice");
	bob.beRepaired(5);

	std::cout << "\n--- Alice spends all her energy ---"<< std::endl;
	for (int i = 0; i < 11; i++)
	{
		alice.attack("Bob");
	}
	
	std::cout << "\n--- Alice tries to act with no energy ---"<< std::endl;
	alice.attack("Bob");
	alice.beRepaired(5);

	std::cout << std::endl;

	return (0);
}
