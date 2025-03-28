#pragma once
#include"Item.h"
#include<string>

class Item;

class Player {
public:
	//wanna make a constructor set the values instead of set and get for now, I will do that later 
	Player();
	Player(std::string inname, int inhealth, int inattack);
	~Player() {
		delete[]inventory;
	};
	void Display(int number);
	bool AddItem(Item inItem);
	//or int IndexItem( std::string itemname);
	int IndexItem(std::string itemname);
	void Usescroll(Item scroll);
	void DisplayInv();

private:
	int health;
	std::string name;
	int attack;
	int max;
	int size;
	Item* inventory;
};