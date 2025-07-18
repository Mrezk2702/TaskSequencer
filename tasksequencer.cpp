// tasksequencer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sequencer.h"
#include "Task.h"
#include <Windows.h>
#include <thread>
void func(void)
{
    std::cout << "Task 01" << std::endl;
}
void func2(void)
{
    std::cout << "Task 02" << std::endl;
}
void func3(void)
{
    std::cout << "Task 03" << std::endl;
}
void func4(void)
{
    std::cout << "Task 04" << std::endl;
}
int main()
{
    Task t01(4, 0, "01");
    Task t02(2, func2, "02");
    Task t03(3, func3, "03");
    Task t04(1, func4, "04");
   

    Sequencer seq;
    seq.add(t01);
    seq.add(t02);
    seq.add(t03);
    seq.add(t04);

    while (true)
    {
        seq.run();
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    
    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
