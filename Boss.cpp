#include <iostream>
#include "Boss.h"


void Boss::Display() {

	std::cout << "Boss name is " << name;
	std::cout << "\nCurrent Health is " << health;
	std::cout << "\nCurrent Attack is " << attack << std::endl;
};