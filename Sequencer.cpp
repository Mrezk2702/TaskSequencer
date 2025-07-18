#include <iostream>
#include "Task.h"
#include <queue>
#include <vector>
#include "Sequencer.h"


void Sequencer::add(const Task& cpy_Task)
{
	

	if (cpy_Task.getAction())
	{
		taskQueue.push(cpy_Task);
	}
	else
	{
		std::cerr << "Rejected Task" << cpy_Task.getID() << " doesn't have a callable function" << std::endl;
		
	}

}

void Sequencer::run(void)
{
	if (!taskQueue.empty())
	{
		Task currentTask = taskQueue.top();
		
		currentTask.execAction();
		taskQueue.pop();
	}
	else
	{
		std::cout << "sequencer Empty" << std::endl;
	}
}