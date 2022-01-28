/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:01:55 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 11:31:04 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called" << "\n";
}

FragTrap::FragTrap(const FragTrap& from):
	ClapTrap(from)
{
	std::cout << "FragTrap copy constructor called" << "\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << "\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "FragTrap" << " ";
		std::cout << this->name << " ";
		std::cout << "is dead" << "\n";
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "FragTrap" << " ";
		std::cout << this->name << " ";
		std::cout << "is tired" << "\n";
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "FragTrap" << " ";
	std::cout << this->name << " ";
	std::cout << "attacks" << " ";
	std::cout << target << ", ";
	std::cout << "causing" << " ";
	std::cout << this->attackDamage << " ";
	std::cout << "points of damage" << "\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->name << ": ";
	std::cout << "HIGH FIVE!!!" << "\n";
}
