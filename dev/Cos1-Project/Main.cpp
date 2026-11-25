#include "MenuOptions.h"
#include <iostream>

int main()
{
    bool gameRunning = true;
   
    
    //Introduce the cinema, give a strange catch phrase that sounds alarming but also not.
    std::string welcomeMessage = "\t\t|----- Welcome To Kaspers Line Drivein Cinema -----|";
    std::string cinemaCatchPhrase = " When The Sun is Down, The Only Cinema Escape That Plays Under The Stars! ";

    std::cout << welcomeMessage << "\n\n" << "\t~~~~~" << cinemaCatchPhrase << "~~~~~" << "\n\n(Press Enter To Start)" << std::endl;
    Menu::Pause();
    while (gameRunning)
    {
        
        
        //Menu::ClearScreen();
        std::cout << std::string(3, '\n');
        Menu::DisplayMenu();
        unsigned int choice = Menu::GetMenuChoice(1, 4);

        switch (choice)
        {
        case 1: std::cout << "Choice 1 Was Selected\n";
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
