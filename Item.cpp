#include"Item.h"
#include<iostream>

Item* EmptyScroll(Player*& playername, std::string first, std::string& second, std::string& third) {
    Item* Allmer = new Item("dirt", 0);  // Placeholder item

    std::cout << "Please Enter the First Verse: \n";
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
        if (!playername->AddItem(askedresource)) {
            std::cout << "Failed to add item to inventory!" << std::endl;
        }
    }
    else {
        std::cout << "Player is null!" << std::endl;
    }

    return nullptr;  // Successfully handled the input
}


Item& Item::operator=(const Item& other) {
	if (this != &other) {  
		name = other.name;
		amount = other.amount;
	}
	return *this;
};
