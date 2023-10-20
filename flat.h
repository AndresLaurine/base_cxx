#ifndef FLAT_H
#define FLAT_H

#include "Building.h"


class Flat: public Building {
public:
        Flat();
        Flat(int id, int nb_floors);
        ~Flat();
        void const leasing();

private:
        int leasing_;
};

#endif
