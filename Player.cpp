#include"Player.h"
#include<string>
#include"Item.h"
#include <iostream>

void Player::Display(int number){
	std::cout << "Player name is " << name;
	std::cout << "\nCurrent Health is " << health;
	std::cout << "\nCurrent Attack is " << attack << std::endl;
	//if (number==1) DisplayInv();//bug inv isnt displaying,fucked up the function call maybe  
};

/*void Player::DisplayInv(){
	//could do this for easier cases  
	if (size == 0) {
		std::cout << name << "'s invetory is " << inventory[size] << std::endl;
	}
	
	for (int i = 0; i < size; i++) {
		std::cout << "Item at slot "<<i+1<<" is " << inventory[i] << std::endl;
	};
};
*/


//first optimization question 
bool Player::AddItem(Item* inItem){
	if (size >= max) {
		std::cout << "Inv is full" << std::endl;
		return false;
	};
		inventory[size] = *inItem;
		size++;
		return true;
};

/*int Player::IndexItem(std::string itemname) {
	if (size == 0) return -1;//most likely here,we dont need this do we 
	for (int i = 0; i < size; i++) {
		//here is the issue 
		if (inventory[i] == itemname) return i+1;
	};
	return -1;//if not found for whatever reason,pr here 
};
*/


void Player::Usescroll(Player* playername,Item* scroll) {
	
	//this should work but nothing is showing 
	if (playername->AddItem(scroll)) {
		std::cout << "Something was actually added\n";
	}
	else
		std::cout << "Die\n";
};



