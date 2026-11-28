#pragma once
#include <string>
#include <vector>
#include <iostream>

//meant to create individual tasks
class Task
{
private:
	//Gives a description of what the task is short and sweet
	std::string taskDescription;
	//gives wether or not the task is done 
	bool taskComplete = false;

public:
	//Getter
	std::string GetDescription() const;

	bool IsCompleted() const;

	void SetDescription(const std::string& desc);

	void SetCompleted(bool result);



};

//meant to hold all of the tasks created
class TaskList
{
private:
	//store tasks for user
	std::vector<Task> taskList;

public:

	void AddTask();

	std::vector<Task> GetTasks() const;

};