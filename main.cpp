#include <iostream>
#include "building.cpp"

int main( int argc, char** argv) {
	int id = -99;
	Building* street[10];
	for ( int i = 0 ; i < 10 ; ++ i) {
		street[i] = nullptr;
}
	int counter = 0;
	std::cout <<" Welcome to SimTown! Please enter building IDs (-99 to end)" << std::endl;
	std::cin >> id;
	while( id != -99 && counter < 10) {
		street[counter] = new Building( id );
		//(*street[counter]).print(std::cout);
		std::cin >> id;
		counter++;
	}
	for (int i = 0 ; i < 10 ; ++ i) {
		if ( street[i] != nullptr) {
			(*street[i]).print(std::cout);
			delete street[i];
		}
	}
	std::cout << "Done" << std::endl;
	return 0; // Normal termination
}

