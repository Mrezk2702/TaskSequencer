#pragma once
#include <functional>
#include <iostream>
#include <string>
class Task
{
public:
	Task(unsigned char priority, std::function <void(void)> action, std::string ID);
	void execAction(void)const;
	
	void log(void)const;
	
	unsigned char getPriority()const;
	
	void setPriority(unsigned char priority);
	
	std::string getID()	 const;
	std::function<void(void)> getAction()const;
	bool operator<(const Task& operand)const;
private:
	unsigned char priority;
	std::function<void(void)> action;
	 std::string ID;
	
};

