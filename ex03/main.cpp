/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:47:43 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 17:06:52 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	victor("Victor");
	ScavTrap	bryce("Bryce");

	victor.attack("Bryce");
	bryce.takeDamage(6);
	bryce.beRepaired(4);

	bryce.guardGate();
	bryce.attack("Victor");
	victor.takeDamage(3);
	victor.beRepaired(8);

	victor.attack("Bryce");
	bryce.takeDamage(17);
	victor.highFivesGuys();
}