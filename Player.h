#pragma once
#include"Item.h"
#include<string>

class Player {
public:
	//wanna make a constructor set the values instead of set and get for now, Iwill do that later 
	Player() : health(0), name("NULL"), attack(0), max(10), size(0) {
		inventory = new Item[max];
		Item* nothing = new Item("Nothing", 0);
		for (int i = 0; i < max; i++) {
			inventory[i] = Item("Nothing", 0); // Corrected initialization
		};
	};
	Player(std::string inname, int inhealth, int inattack) :
		health(inhealth), name(inname), attack(inattack), max(10), size(0) {
		inventory = new Item[max];
		Item* nothing = new Item("Nothing", 0);
		for (int i = 0; i < max; i++) {
			inventory[i] = Item("Nothing", 0);
		}
	};
	~Player() {
		delete []inventory;
	};
	void Display(int number);
	bool AddItem(Item* inItem);
	//or int IndexItem( std::string itemname);
	int IndexItem( std::string itemname);
	void Usescroll(Player& playername,Item* scroll);
	void DisplayInv();
	
private:
	int health;
	std::string name;
	int attack;
	int max; 
	int size;
	Item* inventory;
};
