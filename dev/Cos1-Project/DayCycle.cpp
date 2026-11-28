#include "DayCycle.h"

std::string Day::GetDay()
{
    return dayOfWeek;
}

std::string Day::GetTime()
{
    return timeOfDay;
}

void Day::SetTime(std::string time)
{
    timeOfDay = time;
}

void Day::SetDay(std::string day)
{
    dayOfWeek = day;
}

