#ifndef BUILDING_
#define BUILDING_
#include "Storey.h"

class Building{
	public:
		Building( int id, int nb_floors);
		Building();
		Building (const Building& rhs);
		~Building();
		void print(std::ostream& out) const ;
		void ajoute_etage();
		Building& operator=( const Building& rhs);
	private:
		int id_;
		Storey* storeys_;
		int nb_storeys_;
};

#endif 
