#include"Item.h"
#include<iostream>
#include <limits>  


Item* Item::EmptyScroll(Player* playername) {
    Item* Allmer = new Item("dirt", 0);  // Placeholder item
    std::string first; 
    std::string second;
    std::string third;
    std::string& item=third;
    std::cout << "Please Enter the First Verse: \n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Fix buffer issue
    std::getline(std::cin, first);
    if (first != "O Lord" && first != "o lord" && first != "O LORD") {
        return Allmer;  // If input doesn't match, return placeholder item
    }

    std::cout << "Please Enter the Second Verse: \n";
    std::getline(std::cin, second);
    if (second != "Give" && second != "give" && second != "GIVE" && second != "Teach" && second != "TEACH" && second != "teach") {
        return Allmer;  // If input doesn't match, return placeholder item
    }

    std::cout << "Please Enter the Third Verse: \n";
    std::getline(std::cin, third);
    if (third != "Eastern Sword" && third != "EASTERN SWORD" && third != "eastern sword") {
        return Allmer;  // If input doesn't match, return placeholder item
    }

    // Now create the requested resource item and add it to the player's inventory
    Item* askedresource = new Item(third, 1);  // Create the requested resource item
    std::cout << "Created Item: " << askedresource->name << std::endl;

    if (playername != nullptr) {  // Ensure playername is not null
        std::cout << "Adding item to inventory..." << std::endl;
        if (!playername->AddItem(*askedresource)) {
            std::cout << "Failed to add item to inventory!" << std::endl;
        }
        else {
            std::cout << "Added Item \n";
            return askedresource;
        }
    }
    //if dick was done 
    delete askedresource;
    delete Allmer;
    return nullptr;
}

//go over operator overload and fix it
Item& Item::operator=(const Item& other) {
    Item* inItem = new Item("nothing", 0);
    if (this != &other) {
        name = other.name;//name= is the issue,why 
        amount = other.amount;
    }
    return *inItem;
};