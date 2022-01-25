/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:29:53 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 16:49:00 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor called" << "\n";
}

ScavTrap::ScavTrap(const ScavTrap& from):
	ClapTrap(from)
{
	std::cout << "ScavTrap copy constructor called" << "\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << "\n";
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap attack called" << "\n";
	this->ClapTrap::attack(target);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap" << " ";
	std::cout << this->name << " ";
	std::cout << "is now gate keeping" << "\n";
}