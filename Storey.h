#include <iostream>

class Storey {
	public:
		Storey();
		Storey( const Storey);
		~Storey();
		Storey& operator=(const Storey& rhs);
	private:
		int source_;
		int uid_; // unique identifier
		static int serial_number_;

}
