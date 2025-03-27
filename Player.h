#pragma once
#include <string>
#include"Item.h"

// Forward declaration of the Item class
class Item;

class Player {
public:
	Player() : health(0), name("NULL"), attack(0), max(10), size(0) {
		//inventory = new Item[max];  // Allocate the array of Item objects
		for (int i = 0; i < max; i++) {
			//inventory[i] = Item("Nothing", 0);  // Set custom values for each Item
		}
	};
	Player(std::string inname, int inhealth, int inattack) :
		health(inhealth), name(inname), attack(inattack), max(10), size(0) {
		//inventory = new Item[max];
		//Item* nothing = new Item("Nothing", 0);
		for (int i = 0; i < max; i++) {
			//inventory[i] = Item("Nothing", 0);
		}
	};
	~Player() {
		delete[]inventory;
	};

    void Display(int number);
    bool AddItem(Item* inItem);
    int IndexItem(std::string itemname);
    void Usescroll(Player* playername, Item* scroll);
    void DisplayInv();

private:
    int health;
    std::string name;
    int attack;
    int max;
    int size;
    Item* inventory; // Just a pointer here, no need to include Item.h
};
