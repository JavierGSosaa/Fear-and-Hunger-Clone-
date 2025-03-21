// Fear and Hunger clone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include"Player.h"
#include"Boss.h"
//I do not own nothing Fear and Hunger realted I just wanted to do a scripted fight 
//make a class for the enemie
//make a class for the prota
//make a inv system
//extra challenege make it a pointer and see what to do with it,do that later 
//2 hours spent on this 3/21

int main()
{
    //all this in 40 with the most amount of errors on string, constructors,and dyanmically allocating new memories  
    Boss Testboss("Crow Mauler", 5000,200);
    Player Testname ("Leguard",100,10);
    int choice;//do I make this a main issue or a class issue honestly 
    std::string item = "Eastern Sword";
    Testboss.Display();
    std::cout << "Press 1 to display inventory \n";
    std::cin >> choice;
    Testname.Display(choice);
    if (Testname.AddItem(item)) {
        std::cout << item << " was added to your inv at slot " << Testname.IndexItem(item) << std::endl;
    }else
        std::cout << "Item was not added ";
       

    return 0;
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
