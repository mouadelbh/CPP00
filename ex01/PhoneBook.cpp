/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 05:41:21 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/14 05:06:53 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	PhoneBook::nickname(int i)
{
	int			j;
	std::string	tmp;

	tmp = _contacts[i].getNickName();
	j = 0;
	printsapces(tmp);
	while (tmp[j])
	{
		if (j == 10 && tmp[j])
		{
			std::cout << ".";
			break ;
		}
		std::cout << tmp[j];
		j++;
	}
}

void	PhoneBook::firstname(int i)
{
	int			j;
	std::string	tmp;

	tmp = _contacts[i].getFirstName();
	printsapces(tmp);
	j = 0;
	while (tmp[j])
	{
		if (j == 10 && tmp[j])
		{
			std::cout << ".";
			break ;
		}
		std::cout << tmp[j];
		j++;
	}
}

void	PhoneBook::lastname(int i)
{
	int			j;
	std::string	tmp;

	tmp = _contacts[i].getLastName();
	printsapces(tmp);
	j = 0;
	while (tmp[j])
	{
		if (j == 10 && tmp[j])
		{
			std::cout << ".";
			break ;
		}
		std::cout << tmp[j];
		j++;
	}
}

void	PhoneBook::displayContacts()
{
	int			i;
	std::string	tmp;

	i = 0;
	std::cout << GREEN << BOLD <<"\n - PhoneBook Contact - \n" << RESET;
	while (i < _nbContacts)
	{
		printindex(i + 1);
		firstname(i);
		std::cout << "|";
		lastname(i);
		std::cout << "|";
		nickname(i);
		std::cout << "|\n";
		i++;
	}
}

void	PhoneBook::printfullinfos(int i)
{
	std::cout << GREEN << "\n- Full Contact Information -\n" << RESET;
	std::cout << YELLOW << "First Name: " << RESET;
	std::cout << _contacts[i].getFirstName() << "\n";
	std::cout << YELLOW << "Last Name: " << RESET;
	std::cout << _contacts[i].getLastName() << "\n";
	std::cout << YELLOW << "Nickname: " << RESET;
	std::cout << _contacts[i].getNickName() << "\n";
	std::cout << YELLOW << "Phone Number: " << RESET;
	std::cout << _contacts[i].getPhoneNumber() << "\n";
	std::cout << YELLOW << "Darkest Secret: " << RESET;
	std::cout << _contacts[i].getDarkestSecret() << "\n";
	std::cout << std::endl;
}

void	PhoneBook::addContact()
{
	if (_nbContacts == 8)
		index = 0;
	std::cout << GREEN << "\n- Adding a new contact -\n" << RESET;
	_contacts[index].setFirstName();
	_contacts[index].setLastName();
	_contacts[index].setNickname();
	_contacts[index].setPhoneNumber();
	_contacts[index].setDarkestSecret();
	std::cout << GREEN << "- Contact added successfully -\n" << RESET;
	std::cout << std::endl;
	if (_nbContacts < 8)
		_nbContacts++;
	index++;
}

void	PhoneBook::searchContact()
{
	int			i;
	std::string	tmp;

	i = 0;
	if (_nbContacts == 0)
	{
		std::cout << BOLD << GREEN << "- Contacts list is empty -\n" << RESET;
		return ;
	}
	displayContacts();
	std::cout << "\n\nEnter the index of the contact you want to display: " << RESET;
	std::getline(std::cin, tmp);
	if (std::cin.eof())
	{
		std::cout << "\nBye Bye!\n";
		exit(0);
	}
	if (tmp.length() != 1 || tmp[0] < '1' || tmp[0] > '8')
	{
		std::cout << RED << "- Invalid index\n" << RESET;
		return ;
	}
	i = tmp[0] - '1';
	printfullinfos(i);
}

