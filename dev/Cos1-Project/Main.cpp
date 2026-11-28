#include "MenuOptions.h"
#include <iostream>
#include "Story.h"


int main()
{
    bool gameRunning = true;
   
    
    while (gameRunning)
    {

    //Introduce the cinema, give a strange catch phrase that sounds alarming but also not.
    std::string welcomeMessage = "\t\t|----- Welcome To Kaspers Line Drivein Cinema -----|";
    std::string cinemaCatchPhrase = " When The Sun is Down, The Only Cinema Escape That Plays Under The Stars! ";
    std::string dummy;

    std::cout << welcomeMessage << "\n\n" << "\t~~~~~" << cinemaCatchPhrase << "~~~~~" << "\n\n(Press Enter To Start)" << std::endl;
    std::getline(std::cin,dummy);
        
        
       
        std::cout << std::string(3, '\n');
        Menu::DisplayMenu();
        int choice = Menu::GetMenuChoice(1, 4);

        switch (choice)
        {
            //Start The Game initializing intro before starting chapter 1.
        case 1: std::cout << "\nChoice 1 Was Selected\n";
            std::cout << std::string(5, '\n');
            Menu::StartGame();

            gameRunning = false;
            break;

        case 2:  std::cout << "Choice 2 Was Selected\n";
            break;

        case 3: std::cout << "Choice 3 Was Selected\n";
            break;

        case 4: std::cout << "Choice 4 Was Selected\n";
            gameRunning = false;
            break;

        }

    }

}
