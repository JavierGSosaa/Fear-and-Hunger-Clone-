#pragma once
#include"Item.h"
#include<string>

class Item;

class Player {
public:
	//wanna make a constructor set the values instead of set and get for now, I will do that later 
	Player();
	Player(std::string inname, int inhealth, int inattack);
	/*
	* ~Player() {
		delete[]inventory;
	};
	*/
	//Player& operator<<(Item initem); there is something I can do about this 
	void Display(int number);
	bool AddItem(Item& inItem);//1 byte
	//or int IndexItem( std::string itemname);
	int IndexItem(std::string itemname);//4
	void Usescroll(Item scroll);
	void DisplayInv();

private:
	int health;
	std::string name;//4 or 8
	int attack;//4
	int max;//4
	int size;//4
	Item* inventory;//8 bytes 
};
//player has 
