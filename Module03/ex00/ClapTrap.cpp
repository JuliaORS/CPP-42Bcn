/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/22 20:52:16 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp" 

ClapTrap::ClapTrap(std::string name) : _name(name){
	std::cout << "Default construcor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

//copy constructor
ClapTrap::ClapTrap(ClapTrap const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

//operator "="
ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHP();
		this->_energyPoints = src.getEP();
		this->_attackDamage = src.getAD();
	}
	return (*this);
}

//GETTERS
std::string	ClapTrap::getName() const {
	return(_name);
}

int	ClapTrap::getHP() const {
	return(_hitPoints);
}

int	ClapTrap::getEP() const {
	return(_energyPoints);
}

int	ClapTrap::getAD() const {
	return(_attackDamage);
}

//SETTERS
void	ClapTrap::setName(std::string const name){
	this->_name = name;
}

void	ClapTrap::setHP(int const hp){
	this->_hitPoints = hp;
}

void	ClapTrap::setEP(int const ep){
	this->_energyPoints = ep;
}

void	ClapTrap::setAD(int const ad){
	this->_attackDamage = ad;
}

//FUNCTIONS
void ClapTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing ";
		std::cout << this->_attackDamage << " points of damage!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can not attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned amount){
	if (this->_hitPoints - amount >= 0){
		this->_hitPoints -=  amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " is damaged with " << amount;
		std::cout << " hit points!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
	else{
		std::cout << "ClapTrap " << this->_name << " doesn't have hit points." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned amount){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		this->_energyPoints--;
		this->_hitPoints +=  amount;
		std::cout << "ClapTrap " << this->_name << " has been repaired with ";
		std::cout << amount << " hit points!" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and ";
		std::cout << this->_energyPoints << " energy points."<< std::endl<< std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can not be repaired." << std::endl;
}