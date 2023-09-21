#include <iostream>
#include "building.h"

Building::Building(int id) : id_(id) {
	std::cout << "Building::Building(" << id << ") at " << this <<  std::endl;
}

Building::Building() : id_(-1) {
        std::cout << "Building::Building() at " << this <<  std::endl;
}

Building::Building(const Building& rhs) : id_(rhs.id_) {
	std::cout << "Building::Building(rhs = " << &rhs << " , id_" << rhs.id_ << ")  at " << this <<  std::endl;
}

Building::~Building() {
	std::cout << "Destruction de Building(" << id_ <<") at " << this << std::endl;
}

void Building::print( std::ostream& out) const {
	out << "Building " << id_ << " at " << this << std::endl;
}

Building& Building::operator=(const Building& rhs) {
	id_=rhs.id_;
	std::cout << "Copie du Building(" << id_ << ") at " << this << std::endl;
	return *this;
} 
