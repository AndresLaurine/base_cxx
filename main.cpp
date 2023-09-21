#include <iostream>
#include "building.cpp"

int main( int argc, char** argv) {
	std::cout <<" Welcome to SimTown! Please enter street size" << std::endl;
	int size = 0;
	std::cin >> size;
	std::cout << size << std::endl;
	Building** street_adress = new Building*[size];
	std::cout << "Street adress = " << street_adress << std::endl;

	for (int ib = 0; ib < size ; ++ ib) {
		street_adress[ib] = new Building( ib);
	}

	for (int i = 0; i < size; ++i) {
		if (street_adress[i] != nullptr) {
			street_adress[i]->print(std::cout);
		}
	}

	Building* street = new Building[size];
	for (int ib = 0; ib < size ; ++ ib) {
                street[ib] =  *(street_adress[ib]);
		street[ib].print(std::cout);
        }
	
	//Resize array.
	{
	Building* bigger_street = new Building[size+1];
        for (int ib = 0; ib < size ; ++ ib) {
                bigger_street[ib] = street[ib];
        }
	delete[] street;
	size += 1;
	street = bigger_street;
	}

	Building city_hall(1000);
	street[size-1] = Building(city_hall);
	

	for (int i=0 ; i < size-1; ++i) {
		delete street_adress[i];
	}
	delete[] street;
	delete[] street_adress;
	std::cout << "Done" << std::endl;
	return 0; // Normal termination
}

