#pragma once
#include <string>
#include <vector>
#include <iostream>


namespace Menu
{
	void MenuOptions();

	unsigned int GetMenuChoice(unsigned int min, unsigned int max);



}

void Menu::MenuOptions()
{
	std::cout << "Your Just In Time. What'll It Be Today?" << std::endl;
	unsigned int checker = 0;
	std::cout << "1) Start Your Shift\n\n" << "2) See Choices Made\n\n" << "3) Load Previous Shift\n\n" << "4) I'm Not Staying Tonight! (Exit)" << std::endl;

	while (true)
	{
		std::cin >> checker;
		if (std::cin.fail())
		{
			std::cin.clear();

			std::cin.ignore(100, '\n');

			std::cout << " Incorrect Menu Choice, Try Picking One Of The Options In The Menu This Time " << std::endl;
		}
	}
}

unsigned int Menu::GetMenuChoice(unsigned int min, unsigned int max)
{

}