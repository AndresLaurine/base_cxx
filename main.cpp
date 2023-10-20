#include <iostream>
#include "building.cpp"
#include "storey.cpp"
#include "house.cpp"
#include "flat.cpp"

int main( int argc, char** argv) {
	std::cout <<" Welcome to SimTown! Please enter street size" << std::endl;
	int size = 0;
	std::cin >> size;
	std::cout << size << std::endl;
	std::cout << "How many houses in the street ? " << std::endl;
	int nb_houses = 0;
	std::cin >> nb_houses;
	Building** street_adress = new Building*[size];
	std::cout << "Street adress = " << street_adress << std::endl;

	for (int ib = 0; ib < size ; ++ ib) {
		if (ib < nb_houses) {
			street_adress[ib] = new House(ib, 3);
			std::cout << ib << std::endl;
		}
		else {
			street_adress[ib] = new Flat(ib, 1);
			std::cout << ib << std::endl;
		}
	}

	/*for (int i = 0; i < size; ++i) {
		if (street_adress[i] != nullptr) {
			street_adress[i]->print(std::cout);
		}
	}*/

	for (int ib = 0; ib < size ; ++ ib) {
		std::cout << ib << " " << street_adress[ib] << std::endl;
		
		street_adress[ib]->leasing();
        }
	/*	
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
	city_hall.ajoute_etage();
	street[size-1] = Building(city_hall);
	city_hall.print(std::cout);	

	*/

	for (int i=0 ; i < size; ++i) {
		delete street_adress[i];
	};

	delete[] street_adress;
	std::cout << "Done" << std::endl;
	return 0; // Normal termination
}

