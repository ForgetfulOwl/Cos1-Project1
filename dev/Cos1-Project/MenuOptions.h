#pragma once
#include <string>
#include <vector>
#include <iostream>


namespace Menu
{
	void DisplayMenu();

	unsigned int GetMenuChoice(unsigned int min, unsigned int max);

	void ClearScreen();

	void Pause();
}

void Menu::DisplayMenu()
{
	std::cout << "Your Just In Time. What'll It Be Today?\n" << std::endl;

	std::cout << "1) Start Your Shift\n\n" << "2) See Choices Made\n\n" << "3) Load Previous Shift\n\n" << "4) I'm Not Staying Tonight! (Exit)" << std::endl;

	
}

unsigned int Menu::GetMenuChoice(unsigned int min, unsigned int max)
{
	unsigned int checker = 0;

	while (true)
	{
		std::cin >> checker;
		if (std::cin.fail())
		{
			std::cin.clear();

			std::cin.ignore(100, '\n');

			std::cout << " Incorrect Menu Choice, Try Picking One Of The Options In The Menu This Time " << std::endl;
			continue;
		}

		if (checker >= min && checker <= max)
		{
			return checker;
		}
	}
}

void Menu::ClearScreen()
{
	
	
}

void Menu::Pause()
{
	//Used to allow reading time and or a literal pause, Commented code to be used for prompting a pause.
	//std::cout << "\n\n(Press Enter To Continue)";
	std::string dummy;
	std::getline(std::cin, dummy);
}