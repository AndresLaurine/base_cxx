#include "flat.h"
#include <iostream>

Flat::Flat(): Building(), leasing_(1000)  {};

Flat::Flat(int id, int nb_floors) : Building(id, 1), leasing_(1000) {
	std::cout << "Flat() at " << this << std::endl;
} ;

Flat::~Flat() {};

void const Flat::leasing() {
        std::cout << "The leasing for the flat is " <<  leasing_ << " per month" << std::endl;
};
