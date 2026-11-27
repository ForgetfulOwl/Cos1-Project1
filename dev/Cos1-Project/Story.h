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
	
	 static void LoadPrologue();

	void LoadIntro();
	
};

 void Story::LoadPrologue()
{
	std::cout << "\n\tLet me tell you a story... \n\nAs spring ended and summer started, I needed to find another job. I recently got let go from my previous position as a night guard. The pay was good and I enjoyed the work. Even though I stayed in an office and walked a planned route everyday. unfortunately it didnt last... \n    the company went under and that left me without a job. I saw an ad in the local newspaper for Kaspers Line Drivein Cinema. CINEMA ATTENDANT NEEDED. I had seen the ad many times before but thought nothing of it. I decided to call the number. Whats the worst thing that could happen? ";
}

void Story::LoadIntro()
{
	std::cout << "I pulled into the parking lot near the small office next to the theater. A man opened the door to the office and greeted me." << "\n\t,, Welcome to the theater Patrick, have you been to the theater before ? I told him I've seen a few movies when I was a kid and the big screen had amazed me and left me with good memories with my parents and friends. \n\tDelighted with my response he smiled and said,, thats great to here! You'll learn to love this place.Now, we have a unfiform for you hope it fits well and here is the keys for the projector room and storage shed should you need to do any maintenance or grab anything for the projectionist or office. \n\tWe have a good list of movies showing tonight and we dont normally have any troublesome guests.You'll mostly be welcoming guests and any small tasks that come up as the night goes. Youll find Jeremy in the office he'll give you your first task. Welcome to the theater Patrick. \n\tI felt excited, the theater is almost as I remembered it. the lot was large enough to hold nearly a hundred cars. The big screen looked weatherd and worn. but still stood as a sturdy monument. the area surrounding the theater is a forest to the north just past the big screen. An openning to the east of the forest showed farm land and open fields. the main office was off of a side road just short the local main street. Across the road was a river. called Willows River. although in town we just called it the willows. After collecting my uniform, a flashlight, and a radio. I walked to the office" << std::endl;

}