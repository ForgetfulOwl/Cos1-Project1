#pragma once
#include <string>
#include <vector>
#include <iostream>

namespace Menu
{
	void DisplayMenu();

	unsigned int GetMenuChoice(unsigned int min, unsigned int max);

	void ScreenBuffer();

	void Pause();

	void StartGame();

	void Night1();
}

