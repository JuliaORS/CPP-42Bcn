/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:11:52 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 12:11:52 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp" 
#include <vector>
#include <deque>

void	vectorTest(){

	std::vector<int> vect;
	vect.push_back(1);
	vect.push_back(4);
	vect.push_back(6);
	vect.push_back(64);
	vect.push_back(-123);


	std::cout << std::endl << "----- existing number ----- " << std::endl;
	try{
		std::vector<int>::const_iterator it  = easyfind(vect, 4);
		std::cout << "Number " << *it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		std::vector<int>::const_iterator it  = easyfind(vect, 17);
		std::cout << "Number " << *it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		std::vector<int>::const_iterator it  = easyfind(vect, -2114414);
		std::cout << "Number " << *it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}
}

void	queueTest(){

	std::deque<int> vect;
	vect.push_back(100);
	vect.push_back(-123);
	vect.push_back(231);
	vect.push_back(1);
	vect.push_back(3);


	std::cout << std::endl << "----- existing number ----- " << std::endl;
	try{
		std::deque<int>::const_iterator it  = easyfind(vect, 100);
		std::cout << "Number " << *it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		std::deque<int>::const_iterator it  = easyfind(vect, 17);
		std::cout << "Number " << *it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		std::deque<int>::const_iterator it  = easyfind(vect, -2114414);
		std::cout << "Number " << *it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}
}


int main() {
	vectorTest();
	queueTest();

	return (0);
}
