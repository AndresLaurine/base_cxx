#include <iostream>
#include "building.h"

Building::Building(int id, int nb_floors=1) : id_(id), storeys_(nullptr), nb_storeys_(nb_floors) {
	std::cout << "Building::Building(" << id << ") at " << this <<  std::endl;
	std::cout << "Storeys : ";
	storeys_ = new Storey[nb_storeys_];
	for (int i = 0; i < nb_storeys_; ++ i) {
		std::cout << storeys_[i] << " ";
	};
	std::cout << " " << std::endl;
}

Building::Building() : id_(-1), storeys_(nullptr), nb_storeys_(0) {
        std::cout << "Building::Building() at " << this <<  std::endl;
}

Building::Building(const Building& rhs) : id_(rhs.id_), storeys_(nullptr), nb_storeys_(rhs.nb_storeys_) {
	std::cout << "Building::Building(rhs = " << &rhs << " , id_" << rhs.id_ << ")  at " << this <<  std::endl;
	storeys_ = new Storey[nb_storeys_];
	for( int ifloor=0; ifloor < nb_storeys_; ++ ifloor){
		storeys_[ifloor] = rhs.storeys_[ifloor];
	}
}

Building::~Building() {
	delete[] this->storeys_;
	std::cout << "Destruction de Building(" << id_ <<") at " << this << std::endl;
}

void Building::print( std::ostream& out) const {
	out << "Building " << id_ << " at " << this << std::endl;
}

void Building::ajoute_etage() {
	nb_storeys_ += 1;
	n_storeys = new Storey[nb_storeys_];
	for (int ifloor = 0; ifloor < nb_storeys_-1; ++ifloor) {
		new_storeys[ifloor] = storeys_[ifloor];
	}
	delete[] storeys_;
	storeys_ = new Storey[nb_storeys_];
	storeys_ = n_storeys;
	delete[] n_storeys;
	//storeys_[nb_storeys-1] = Storey()
	}
}

Building& Building::operator=(const Building& rhs) {
	id_=rhs.id_;
	nb_storeys_ = rhs.nb_storeys_;
	for( int ifloor = 0; ifloor < nb_storeys_; ++ ifloor) {
		storeys_[ifloor] = rhs.storeys_[ifloor];
	}
	std::cout << "Copie du Building(" << id_ << ") at " << this << std::endl;
	return *this;
} 
