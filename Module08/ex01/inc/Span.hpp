/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:14:40 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/11 15:46:22 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP 
# define SPAN_HPP

# include <iostream>
# include <set>
# include <stdexcept>
# include <random>

# define RESET "\033[0m"
# define RED "\033[31m"

class Span {
	
	public:
		Span(unsigned int n);
		Span(const Span & src);
		~Span();

		Span&	operator=(const Span & src);

		std::multiset<int>	getSpan() const;
		unsigned int			getSize() const;

		void	addNumber(int nb);
		void	addRangeNumbers();
		int		shortestSpan();
		int		longestSpan();
		void	printSpan() const;

	private:
		std::multiset<int>	_span;
		unsigned int		_size;
};

#endif