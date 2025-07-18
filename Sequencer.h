#pragma once
#include "Task.h"
#include <iostream>
#include <queue>
#include <vector>
class Sequencer
{

public:
	void add(const Task& cpy_Task);
	void run(void);

	
private:
	
	std::priority_queue<Task,std::vector<Task>,std::less<Task>> taskQueue;




};

