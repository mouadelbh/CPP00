#include "Main.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string cmd;
	bool		status;

	displaystartup();
	status = true;
	while (status)
	{
		std::cout << "*************************************************\n";
		std::cout << "Please type one of the above commands to proceed.\n";
		std::cout << "⤷ ";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || cmd.compare("EXIT") == 0)
		{
			std::cout << "\nBye Bye!\n";
			status = false;
		}
		else if (cmd.compare("ADD") == 0)
			phonebook.addContact();
		else if (cmd.compare("SEARCH") == 0)
			phonebook.searchContact();
		else
			std::cout << RED << "Invalid command\n" << RESET;
	}
	return (0);
}
