/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:28:26 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/20 15:26:18 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap_trap_1("CT1");
	ClapTrap	clap_trap_2("CT2");
	ClapTrap	clap_trap_3;

	std::cout << std::endl;

	std::cout << GREEN << "[TEST - INITILIZATION]" << END << std::endl;
	std::cout << clap_trap_1;
	std::cout << clap_trap_2;
	std::cout << clap_trap_3;

	std::cout << std::endl;

	std::cout << GREEN << "[TEST - SET VALUES]" << END << std::endl;
	clap_trap_1.set_ad(10);
	clap_trap_2.set_ad(2);
	clap_trap_3.set_name("CT3");
	clap_trap_3.set_ep(0);
	std::cout << std::endl;
	std::cout << clap_trap_1;
	std::cout << clap_trap_2;
	std::cout << clap_trap_3;

	std::cout << std::endl;

	std::cout << GREEN << "[TEST - BATTLE (ROUND 1)]" << END << std::endl;
	clap_trap_1.attack("CT2");
	clap_trap_2.takeDamage(10);
	clap_trap_3.attack("CT2");
	std::cout << std::endl;
	std::cout << clap_trap_1;
	std::cout << clap_trap_2;
	std::cout << clap_trap_3;

	std::cout << std::endl;

	std::cout << GREEN << "[TEST - BATTLE (ROUND 2)]" << END << std::endl;
	clap_trap_1.beRepaired(5);
	clap_trap_2.attack("CT3");
	clap_trap_3.beRepaired(2);
	std::cout << std::endl;
	std::cout << clap_trap_1;
	std::cout << clap_trap_2;
	std::cout << clap_trap_3;

	std::cout << std::endl;

	return (0);
}