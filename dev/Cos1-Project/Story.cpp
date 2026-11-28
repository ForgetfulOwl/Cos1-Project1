#include <string>
#include <vector>
#include <iostream>
#include "MenuOptions.h"
#include "Story.h"

void Story::LoadPrologue()
{
	std::cout << "\n\tLet me tell you a story... \n\nAs spring ended and summer started, I needed to find another job. I recently got let go from my previous position as a night guard. The pay was good and I enjoyed the work. Even though I stayed in an office and walked a planned route everyday. unfortunately it didnt last... \n\n    the company went under and that left me without a job. I saw an ad in the local newspaper for Kaspers Line Drivein Cinema. CINEMA ATTENDANT NEEDED. I had seen the ad many times before but thought nothing of it. I decided to call the number. Whats the worst thing that could happen? " << std::endl;

	std::cout << "\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n" << "\n\n(Press Enter To Continue)";
	Menu::Pause();
	Menu::ScreenBuffer();
}

void Story::LoadIntro()
{
	std::cout << "\tI pulled into the parking lot near the small office next to the theater. A man opened the door to the office and greeted me." << "\n\n\t Welcome to the theater Patrick, have you been to the theater before ? I told him I've seen a few movies when I was a kid and the big screen had amazed me and left me with good memories with my parents and friends. \n\n\tDelighted with my response he smiled and said,, thats great to here! You'll learn to love this place.Now, we have a unfiform for you hope it fits well and here is the keys for the projector room and storage shed should you need to do any maintenance or grab anything for the projectionist or office. \n\n\tWe have a good list of movies showing tonight and we dont normally have any troublesome guests.You'll mostly be welcoming guests and any small tasks that come up as the night goes. Youll find Jeremy in the office he'll give you your first task. Welcome to the theater Patrick. \n\n\tI felt excited, the theater is almost as I remembered it. the lot was large enough to hold nearly a hundred cars. The big screen looked weatherd and worn. but still stood as a sturdy monument. the area surrounding the theater is a forest to the north just past the big screen. An openning to the east of the forest showed farm land and open fields. the main office was off of a side road just short the local main street. Across the road was a river. called Willows River. although in town we just called it the willows. After collecting my uniform, a flashlight, and a radio. I walked to the office" << std::endl;

	std::cout << "\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n" << "\n\n(Press Enter To Continue)";
	Menu::Pause();
	Menu::ScreenBuffer();

}

void Story::DisplayRules()
{
	//TODO rules that can be pulled up a few times but atleast in the beginning
}

void Story::DisplayTaskList()
{

}

void Story::TalkWithJeremy()
{
	//starts the game and gives the rules the first time followed by tasks for the night
	std::cout << "After a short walk to the office. I found Jeremy pouring a cup of coffee for himself. He noticed me enter the office and introduced himself. \n\n\tHello you must be Patrick. For today we have a few tasks for you, including cleaning up trash left in the 5th aisle, tightening a loose speaker fixture in aisle 2, and helping Stephanie load movies into the projectior after each show. \n\n\tAfter handing me a printed paper list. I Thanked him and walked out of the office closing the door behind me.\n\n\t Ok Lets Do This, I told myself as customers started lining up at the entry gate, Filing in.\n\n\t The Night Has Started..." << std::endl;

	std::cout << "\n-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n" << "\n\n(Press Enter To Continue)";
	Menu::Pause();
	Menu::ScreenBuffer();
}