/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 05:41:44 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/10 03:48:31 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Main.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_nbContacts = 0;
		int		index = 0;
	public:
		void	printfullinfos(int i);
		void	firstname(int i);
		void	lastname(int i);
		void	nickname(int i);
		void	addContact();
		void	searchContact();
		void	displayContacts();
};

#endif
