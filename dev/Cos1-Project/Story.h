#pragma once
#include <string>
#include <vector>
#include <iostream>



class Story
{
	//String to be used to display short sentence on weather and enviornment at each chapter start
	std::string timeOfDay;

	//integer that can only be positive to go along with the time of day and display the hour for each chapter
	unsigned int timeByHour;

	//string vector to store the story segments in a container
	// used to determine place in story
	std::vector<Story> storySegment;
	



};