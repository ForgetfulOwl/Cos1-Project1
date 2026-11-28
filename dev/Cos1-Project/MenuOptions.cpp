#include <string>
#include <vector>
#include <iostream>
#include "MenuOptions.h"
#include "Story.h"
#include "DayCycle.h"

void Menu::DisplayMenu()
{
	std::cout << "Your Just In Time. What'll It Be Today?\n" << std::endl;

	std::cout << "1) Start Your Shift\n\n" << "2) See Choices Made\n\n" << "3) Load Previous Shift\n\n" << "4) I'm Not Staying Tonight! (Exit)" << std::endl;


}

unsigned int Menu::GetMenuChoice(unsigned int min, unsigned int max)
{
	//Create variable to store user input
	std::string checker = "d";
	//TODO keep an eye on this one it might not be neccesary
	while (true)
	{
		//variable to store the input from user to compare and validate if its a menu option
		std::getline(std::cin, checker);
		unsigned int stringVal = std::stoi(checker);
		if (stringVal >= min && stringVal <= max)
		{

			return stringVal;
		}

		else
		{
			std::cout << " Incorrect Menu Choice, Try Picking One Of The Options In The Menu This Time " << std::endl;
			continue;
		}
	}
}

void Menu::ScreenBuffer()
{
	std::cout << std::string(3, '\n');

}

void Menu::Pause()
{
	bool Pause = true;
	while (Pause)
	{

		//Used to allow reading time and or a literal pause, Commented code to be used for prompting a pause.
		//std::cout << "\n\n(Press Enter To Continue)";
		std::string dummy;
		std::getline(std::cin, dummy);

		if (dummy == "")
		{
			ScreenBuffer();
			std::cout << "-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~";
			Pause = false;
		}

		else
		{
			break;
		}
	}
}

void Menu::StartGame()
{
	Story::LoadPrologue();

	Story::LoadIntro();

	Story::TalkWithJeremy();
	bool firstDay = true;

	while (firstDay)
	{
		Day day
	}

}

void Menu::Night1()
{

}
//TODO method/function unknown where needed

//void Menu::LoadPrologue()
//{
//	std::cout << ""
//}