/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:00:16 by julolle-          #+#    #+#             */
/*   Updated: 2023/12/14 18:20:51 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
	
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact();
		int		n_contact;

	private:
		Contact	_contact[8];
};

#endif
