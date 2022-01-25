/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:12:38 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 16:15:00 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name):
	name(name),
	hitPoints(10),
	energyPoints(10),
	attackDamage(10)
{
	std::cout << "ClapTrap default constructor called" << "\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << "\n";
}

ClapTrap::ClapTrap(const ClapTrap& from)
{
	std::cout << "ClapTrap copy constructor called" << "\n";
	(*this) = from;
}

void	ClapTrap::operator=(const ClapTrap& from)
{
	std::cout << "ClapTrap assignment operator called" << "\n";
	this->name = from.name;
	this->hitPoints = from.hitPoints;
	this->energyPoints = from.energyPoints;
	this->attackDamage = from.attackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap" << " ";
		std::cout << this->name << " ";
		std::cout << "is dead" << "\n";
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap" << " ";
		std::cout << this->name << " ";
		std::cout << "is tired" << "\n";
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "ClapTrap" << " ";
	std::cout << this->name << " ";
	std::cout << "attacks" << " ";
	std::cout << target << ", ";
	std::cout << "causing" << " ";
	std::cout << this->attackDamage << " ";
	std::cout << "points of damage" << "\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap" << " ";
	std::cout << this->name << " ";
	std::cout << "took" << " ";
	std::cout << amount << " ";
	std::cout << "points" << "\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap" << " ";
		std::cout << this->name << " ";
		std::cout << "is dead" << "\n";
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap" << " ";
		std::cout << this->name << " ";
		std::cout << "is tired" << "\n";
		return ;
	}
	this->energyPoints -= 1;
	this->hitPoints += amount;
	std::cout << "ClapTrap" << " ";
	std::cout << this->name << " ";
	std::cout << "gained" << " ";
	std::cout << amount << " ";
	std::cout << "points" << "\n";
}