#include <iostream>
#include "building.cpp"

int main( int argc, char** argv) {
	int id = -99;
	std::cout <<" Welcome to SimTown! Please enter street size" << std::endl;
	int size = 0;
	std::cin >> size;

	Building** street = new Building*[size];
	std::cout << "Street adress = " << street << std::endl;
	for (int ib = 0; ib < size ; ++ ib) {
		street[ib] = new Building( ib);
	}
	for (int i = 0; i < size; ++i) {
		if (street[i] != nullptr) {
			street[i]->print(std::cout);
		}
	}
	for (int i=0 ; i < size; ++i) {
		std::cout << "Delete phase " << street[i] << std::endl;
		delete street[i];
	}
	delete[] street;
	std::cout << "Done" << std::endl;
	return 0; // Normal termination
}

