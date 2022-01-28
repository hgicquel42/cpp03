/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:58:38 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 11:31:23 by hgicquel         ###   ########.fr       */
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

void	DiamondTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "DiamondTrap" << " ";
		std::cout << this->name << " ";
		std::cout << "is dead" << "\n";
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "DiamondTrap" << " ";
		std::cout << this->name << " ";
		std::cout << "is tired" << "\n";
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "DiamondTrap" << " ";
	std::cout << this->name << " ";
	std::cout << "attacks" << " ";
	std::cout << target << ", ";
	std::cout << "causing" << " ";
	std::cout << this->attackDamage << " ";
	std::cout << "points of damage" << "\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->ClapTrap::name << ": ";
	std::cout << "My real name is" << " ";
	std::cout << this->name << "\n";
}