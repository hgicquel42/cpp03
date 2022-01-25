/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:58:38 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 18:07:43 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	name(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "DiamondTrap constructor called" << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& from):
	ClapTrap(from),
	ScavTrap(from),
	FragTrap(from)
{
	std::cout << "DiamondTrap copy constructor called" << "\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << "\n";
}

void	DiamondTrap::attack(std::string& target)
{
	std::cout << "DiamondTrap attack called" << "\n";
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->name << ": ";
	std::cout << "My ClapTrap name is" << " ";
	std::cout << this->ClapTrap::name << "\n";
}