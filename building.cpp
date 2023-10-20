#include <iostream>
#include "building.h"
#include <cstdlib>

Building::Building(int id, int nb_floors= rand() % 5 ) : id_(id), storeys_(nullptr), nb_storeys_(nb_floors) {
	//std::cout << "Creation Building(" << id << ") at " << this <<  std::endl;
	storeys_ = new Storey[nb_storeys_];
	/*for (int i = 0; i < nb_storeys_; ++ i) {
		std::cout << "Storey : " << storeys_[i] <<" at " << &storeys_;
	}
	std::cout << " " << std::endl;
	*/
}

Building::Building() : id_(-1), storeys_(nullptr), nb_storeys_(0) {
        //std::cout << "Creation Building base at " << this <<  std::endl;
}

Building::Building(const Building& rhs) : id_(rhs.id_), storeys_(nullptr), nb_storeys_(rhs.nb_storeys_) {
	//std::cout << "Creation Building par copie (rhs = " << &rhs << " , id_" << rhs.id_ << ")  at " << this <<  std::endl;
	storeys_ = new Storey[nb_storeys_];
	for( int ifloor=0; ifloor < nb_storeys_; ++ ifloor){
		storeys_[ifloor] = rhs.storeys_[ifloor];
	}
}

Building::~Building() {
	delete[] this->storeys_;
	//std::cout << "Destruction de Building(" << id_ <<") at " << this << std::endl;
}

void Building::print( std::ostream& out) const {
	//out << "Building " << id_ << " at " << this << std::endl;
	if (id_ != 1000) {
		std::cout << "   ________________ " << std::endl;	
		std::cout << "  /               /|" << std::endl;
		std::cout << " /_______________/ |" << std::endl;
		std::cout <<" |       _       | |" << std::endl;
		std::cout <<" |      (_)      | |" << std::endl;
	
		for (int ifloor=0 ; ifloor < nb_storeys_-1; ifloor+=1){
			std::cout <<" |   _      _    | |" << std::endl;
			std::cout <<" |  |_|    |_|   | |" << std::endl;
			std::cout <<" |               | |" << std::endl;
		}
		if (id_ < 10 && id_ > -1) {
			std::cout <<" |  _    _       | |" << std::endl;
			std::cout <<" | |_|  | |"<< id_ <<"     | /" << std::endl;
			std::cout <<" |______| |______|/ " << std::endl;
		}
		if ((id_ < 100 && id_ > 9) || (id_ < 0 && id_ > -10 )) {
                	std::cout <<" |  _    _       | |" << std::endl;
                	std::cout <<" | |_|  | |"<< id_ <<"    | /" << std::endl;
                	std::cout <<" |______| |______|/ " << std::endl;
                }
		if ((id_ < 1000 && id_ > 99) || (id_ < -9 && id_ > -100 )) {
                        std::cout <<" |  _    _       | |" << std::endl;
                        std::cout <<" | |_|  | |"<< id_ <<"   | /" << std::endl;
                        std::cout <<" |______| |______|/ " << std::endl;
                }
	}

	else {
		std::cout << "     ________________ " << std::endl;
		std::cout << "    /               /)" << std::endl;
		std::cout << "   /               //)" << std::endl;
		std::cout << "  /_______________///)" << std::endl;
        	std::cout <<" (       _       )///)" << std::endl;
        	std::cout <<" (      (_)      )///)" << std::endl;

        	for (int ifloor=0 ; ifloor < nb_storeys_-1; ifloor+=1){
                	std::cout <<" (   _      _    )///)" << std::endl;
                	std::cout <<" (  |_|    |_|   )///)" << std::endl;
                	std::cout <<" (               )///)" << std::endl;
        	}
        	std::cout <<" (  _    _       )///" << std::endl;
        	std::cout <<" ( |_|  | |      )//" << std::endl;
        	std::cout <<" (______| |______)/" << std::endl;
      
		}
}

void Building::ajoute_etage() {
	Storey* n_storeys = new Storey[nb_storeys_+1];
	clone_storey(storeys_, n_storeys);
	nb_storeys_ +=1;
	delete[] storeys_;
	storeys_ = n_storeys;
	//std::cout << "J'ai ajouté un étage " << std::endl;
}

Building& Building::operator=(const Building& rhs) {
	if (this == &rhs) {
		return *this;
	}
	else{
		delete[] storeys_;
		this->id_ =rhs.id_;
		this->nb_storeys_ = rhs.nb_storeys_;
		this->storeys_ = new Storey[this->nb_storeys_];	
		for( int ifloor = 0; ifloor < nb_storeys_; ++ ifloor) {
			storeys_[ifloor] = rhs.storeys_[ifloor];
		}
	}
	//std::cout << "Copie du Building(" << id_ << ") at " << this << std::endl;
	return *this;
} 

void Building::clone_storey(Storey* from, Storey* to) {
	for (int ifloor = 0; ifloor < nb_storeys_; ++ifloor) {
                to[ifloor] = from[ifloor];
        }
}


