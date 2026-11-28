#pragma once
#include <string>
#include <vector>


class Day
{
private:
	std::string dayOfWeek;

	//String to be used to display short sentence on weather and enviornment at each chapter start
	std::string timeOfDay;

public:

	std::string GetDay();

	std::string GetTime();

	void SetTime(std::string time);

	void SetDay(std::string day);
};

class Days
{

};