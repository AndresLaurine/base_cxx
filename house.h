#ifndef HOUSE_H
#define HOUSE_H

#include "Building.h"


class House: public Building {
public:
	House();
	House(int id, int nb_floors);
	~House();
	void const leasing();

private:	
	int leasing_;
};

#endif

