/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:09:21 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 18:05:22 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& from);
		~DiamondTrap(void);
		void	attack(std::string& name);
		void	whoAmI(void);
};