/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:55:08 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/25 19:48:14 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP 
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap();

		DiamondTrap & operator=(DiamondTrap const & src);

		//void whoAmI();

	private:
		std::string _name;
};

#endif
