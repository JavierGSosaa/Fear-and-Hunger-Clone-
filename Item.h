#pragma once
#include"Player.h"
#include<string>

class Item {
public:
	std::string name;
	int amount;
	Item() : name("Dirt"), amount(0) {};
	//Item(const Item& other) : name(other.name), amount(other.amount) {};
	Item(std::string inname, int inamount) : name(inname), amount(inamount) {};
	Item* EmptyScroll(Player*& playername,std::string first, std::string second, std::string third);
	Item& operator=(const Item& other);
private:
	
};