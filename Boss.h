#pragma once


class Boss {
public:
	//wanna make a constructor set the values instead of set and get for now, Iwill do that later 
	Boss() : health(0), name("NULL"), attack(0) {};
	Boss(std::string inname, int inhealth, int inattack) : health(inhealth), name(inname), attack(inattack) {};
	//~Boss();
	void Display();
private:
	int health;
	std::string name;
	int attack;

};
