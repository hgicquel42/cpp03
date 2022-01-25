/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:01:55 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 17:06:27 by hgicquel         ###   ########.fr       */
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->name << ": ";
	std::cout << "HIGH FIVE!!!" << "\n";
}
