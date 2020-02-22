// Project.cpp : Defines the entry point for the application.
//

#include "Project.h"

int main()
{
	std::string val;
	std::cout << "Type 'exit' to exit: ";
	std::cin >> val;

	while (val.compare("exit"))
	{
		std::cout << "Looped: ";
		std::cin >> val;
	}

	std::cout << "\nExited\n";
}
