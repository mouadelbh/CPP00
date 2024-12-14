/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:22:54 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/10 03:45:24 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int	NumberNotValid(std::string nb)
{
	int	i;

	i = 0;
	while (nb[i])
	{
		if (!(nb[i] >= '0' && nb[i] <= '9'))
		{
			std::cout << RED << "Invalid phone number\n" << RESET;
			return (1);
		}
		i++;
	}
	return (0);
}

int	StringNotValid(std::string str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	if (!str[i])
	{
		std::cout << RED << "Line is empty\n" << RESET;
		return (1);
	}
	return (0);
}

void	printindex(int i)
{
	std::cout << "|         ";
	std::cout << RED << i << RESET << "|";
}

void	printsapces(std::string str)
{
	int	i;
	int	len;

	i = 0;
	len = str.length();
	while (i < 10 - len)
	{
		std::cout << " ";
		i++;
	}
}

void	displaystartup()
{
	std::cout << "*********************************************\n";
	std::cout << "*              " << BOLD << YELLOW << "WELCOME TO YOUR              " << RESET << "*\n";
	std::cout << "*              " << BOLD << YELLOW << "AWESOME PHONEBOOK            " << RESET << "*\n";
	std::cout << "*********************************************" << RESET << "\n\n";
	std::cout << YELLOW << "Your phonebook is currently empty.\n" << RESET;
	std::cout << WHITE << "You have the following commands available:\n\n";
	std::cout << GREEN << "1. ADD    - " << RESET << "Add a new contact to your phonebook.\n";
	std::cout << GREEN << "2. SEARCH - " << RESET << "Look up an existing contact.\n";
	std::cout << GREEN << "3. EXIT   - " << RESET << "Close the phonebook application.\n\n";
	std::cout << "Your input is case-sensitive, so type carefully!\n" << RESET;
}
