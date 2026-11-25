#pragma once
#include <string>
#include <vector>
#include <iostream>



class Story
{private:
	//String to be used to display short sentence on weather and enviornment at each chapter start
	std::string timeOfDay;

	//integer that can only be positive to go along with the time of day and display the hour for each chapter
	unsigned int timeByHour;

	//string vector to store the story segments in a container
	// used to determine place in story
	std::vector<Story> storySegment;

public:
	
	void LoadPrologue();

	
};

void Story::LoadPrologue()
{
	std::cout << "When spring ended and summer came I wanted to try finding a part time job. I needed the extra money and I planned on moving in with my partner soon. It has been over a month since I was let go from my last job as a night guard. The pay was good and I enjoyed the work. Even though I stayed in an office and walked a planned route everyday. unfortunately it didnt last the company went under and that left me without a job. Kaspers Line cinema had been on the outskirts of my town for a long time. i've known alot of people to go and see new releases or old movie mondays when they featured westerns and old black and white horror movies.    "
}