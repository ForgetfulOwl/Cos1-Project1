#include "TaskList.h"

std::string Task::GetDescription() const
{
    return taskDescription;
}

bool Task::IsCompleted() const
{
    return taskComplete;
}

void Task::SetDescription(const std::string& desc)
{
    taskDescription = desc;
}

void Task::SetCompleted(bool result)
{
    taskComplete = result;
}




void TaskList::AddTask()
{

}

std::vector<Task> TaskList::GetTasks() const
{
    return std::vector<Task>();
}
