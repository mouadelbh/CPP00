/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 05:22:21 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/14 05:07:20 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	Contact::getFirstName()
{
	return (_firstName);
}

std::string	Contact::getLastName()
{
	return (_lastName);
}

std::string	Contact::getNickName()
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (_darkestSecret);
}

void	Contact::setFirstName()
{
	std::string firstName;

	while (true)
	{
		std::cout << "Enter a first name: ";
		std::getline(std::cin, firstName);
		if (std::cin.eof())
		{
			std::cout << "\nBye Bye!\n";
			exit(0);
		}
		if (!StringNotValid(firstName))
			break ;
	}
	_firstName = firstName;
}

void	Contact::setLastName()
{
	std::string lastName;

	while (true)
	{
		std::cout << "Enter a last name: ";
		std::getline(std::cin, lastName);
		if (std::cin.eof())
		{
			std::cout << "\nBye Bye!\n";
			exit(0);
		}
		if (!StringNotValid(lastName))
			break ;
	}
	_lastName = lastName;
}

void	Contact::setNickname()
{
	std::string nickname;

	while (true)
	{
		std::cout << "Enter a nickname: ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
		{
			std::cout << "\nBye Bye!\n";
			exit(0);
		}
		if (!StringNotValid(nickname))
			break ;
	}
	_nickname = nickname;
}

void	Contact::setPhoneNumber()
{
	int			i;
	std::string phoneNumber;

	while (true)
	{
		std::cout << "Enter a phone number: ";
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
		{
			std::cout << "\nBye Bye!\n";
			exit(0);
		}
		if (!NumberNotValid(phoneNumber))
			break ;
	}
	i = 0;
	while (phoneNumber[i])
	{
		if (!std::isdigit(phoneNumber[i]))
		{
			std::cout << RED << "Invalid phone number\n" << RESET;
			setPhoneNumber();
			return ;
		}
		i++;
	}
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret()
{
	std::string darkestSecret;

	while (true)
	{
		std::cout << "Enter a darkest secret: ";
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof())
		{
			std::cout << "\nBye Bye!\n";
			exit(0);
		}
		if (!StringNotValid(darkestSecret))
			break ;
	}
	_darkestSecret = darkestSecret;
}
