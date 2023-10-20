#include "house.h"
#include <iostream>
#include <cstdlib>

House::House(): Building(), leasing_(2000)  {};

House::House(int id, int nb_floors = rand() % 5) : Building(id, nb_floors), leasing_(2000) {} ;

House::~House() {};

void const House::leasing() {
	std::cout << "The leasing for the house is " <<  leasing_ << " per month" << std::endl;
};
