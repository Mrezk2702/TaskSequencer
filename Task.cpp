#include "Task.h"
 Task::Task(unsigned char priority, std::function <void(void)> action, std::string ID)
	:action(action), priority(priority), ID(ID)
{
	std::cout << "Added " << ID << std::endl;

}
void  Task::execAction(void)const
{
	std::cout << "Executing " << ID << std::endl;
	if (action.operator bool())
	{
		action();
	}
	else
	{
		log();
		
	}
}
void  Task::log(void)const
{
	std::cout << "Task ID: " << ID << ", Priority: " << (int)priority<<" ";
	if (action)
	{
		std::cout << " [callable]";
	}
	else
	{
		std::cout << "function wrapper is empty"<<std::endl;
	}
	std::cout << std::endl;

}
unsigned char  Task::getPriority()const
{
	return priority;

}
void  Task::setPriority(unsigned char priority)
{
	if (priority < UCHAR_MAX && priority > 0)
	{
		this->priority = priority;

	}
}
std::string  Task::getID()	 const
{
	return ID;
}
std::function<void(void)> Task::getAction() const
{
	return this->action;
}
bool  Task::operator<(const Task& operand)const
{

	return (priority < operand.priority);

}
