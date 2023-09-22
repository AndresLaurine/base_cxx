#ifndef DEF_STOREY_
#define DEF_STOREY_
#include <iostream>

class Storey {
	public:
		Storey();
		Storey( const Storey& rhs);
		~Storey();
		Storey& operator=(const Storey& rhs);
		friend std::ostream& operator<<(std::ostream& out,const Storey& rhs); // not a member function, friend to access private members
	private:
		int source_;
		int uid_; // unique identifier
		static int serial_number_;

};
#endif
