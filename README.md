# Task Sequencer

A lightweight C++ task scheduling system using priority-based execution. Tasks are user-defined `std::function<void()>` callables, each given a unique ID and priority. The `Sequencer` class executes tasks in order of priority, highest first.

## 📦 Overview

This project provides:
- A `Task` class encapsulating an action with a priority and identifier.
- A `Sequencer` class that manages a priority queue of tasks.
- Optional task validation at insertion time.
- Safe execution with logging and diagnostics.

---

## 🚀 Components

### Task

Represents an executable unit of work.

#### Public Interface:
```cpp
Task(unsigned char priority, std::function <void(void)> action, std::string ID);
void execAction(void)const;
void log(void)const;
unsigned char getPriority()const;
void setPriority(unsigned char priority);
std::string getID()	 const;
std::function<void(void)> getAction()const;
bool operator<(const Task& operand)const;
```
### 🔄 Sequencer Class


The `Sequencer` acts as a task scheduler, maintaining a priority queue of tasks and executing the highest-priority task available each time `run()` is called.

It supports:

- Adding tasks with validation
- Safe, ordered execution
- Logging of empty queue states
- Extensibility for future features like timed execution or keyboard events

---
#### Public Interface:
```cpp
void add(const Task& cpy_Task);
void run(void);

