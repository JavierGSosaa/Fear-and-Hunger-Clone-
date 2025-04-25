#pragma once
#include"Player.h"
#include<string>
class Player;

class Item {
public:
	std::string name;//4
	int amount;//4
	Item() : name("Dirt"), amount(0) {};
	//Item(const Item& other) : name(other.name), amount(other.amount) {};
	Item(std::string inname, int inamount) : name(inname), amount(inamount) {};
	Item EmptyScroll(Player* playername);//8 
	Item& operator=(const Item& other);
private:

};
//total is 8 bytes 