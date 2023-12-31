#ifndef BUILDING_
#define BUILDING_
#include "Storey.h"
#include <cstdlib>

class Building{
	public:
		Building( int id, int nb_floors);
		Building();
		Building (const Building& rhs);
		~Building();
		void print(std::ostream& out) const ;
		void ajoute_etage();
		virtual void const leasing()=0;
		Building& operator=( const Building& rhs);
	private:
		int id_;
		Storey* storeys_;
		int nb_storeys_;
		void clone_storey(Storey* from, Storey* to); // Copie nb_storeys_
};

#endif 
