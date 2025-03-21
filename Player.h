#pragma once
#include<string>

class Player {
public:
	//wanna make a constructor set the values instead of set and get for now, Iwill do that later 
	Player() : health(0), name("NULL"), attack(0), max(10), size(0) {
		    inventory = new std::string[max];
			for (int i = 0; i < max; i++) {
				inventory[i] = "Empty";
			}
	}
	Player(std::string inname, int inhealth, int inattack) :
		health(inhealth), name(inname), attack(inattack), max(10), size(0) {
		inventory = new std::string[max]; 
		for (int i = 0; i < max; i++) {
			inventory[i] = "Empty"; 
		}
	};
	~Player() {
		delete []inventory;
	};
	void Display(int number);
	bool AddItem(std::string item);
	//or int IndexItem( std::string itemname);
	int IndexItem( std::string itemname);
	void DisplayInv();
	
private:
	int health;
	std::string name;
	int attack;
	int max; 
	int size;
	std::string* inventory;
};
