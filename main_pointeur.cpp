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
        //Resize array.
        {
        Building** bigger_street_adress = new Building*[size+1];
        for (int ib = 0; ib < size ; ++ ib) {
                bigger_street_adress[ib] = street_adress[ib];
        }
	delete[] street_adress;

        size += 1;
        street_adress = bigger_street_adress;
        }
	
        Building* city_hall_adress = new Building(1000);
        street_adress[size-1] = city_hall_adress;

	for (int i=0 ; i < size; ++i) {
		delete street_adress[i];
        }

        delete[] street_adress;
        std::cout << "Done" << std::endl;
        return 0; // Normal termination
}
