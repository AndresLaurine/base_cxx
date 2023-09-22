#include "Storey.h"

int Storey::serial_number_ = 1;

Storey::Storey(): source_(serial_number_), uid_(serial_number_) {
	++ serial_number_;
	std::cout << "Storey::Storey(): id = " << uid_ << " at " << this << std::endl;
}

Storey::Storey(const Storey& rhs): uid_(serial_number_ ++) {
        std::cout << "Storey::Storey(): id = " << uid_ << " at " << this << std::endl;
}

Storey::~Storey() {
	
}

Storey& Storey::operator=(const Storey& rhs) {
	 std::cout << "Storey::Operator=(rhs uid = " << rhs.uid_ << ") uid = " << uid_ << " at " << this << std::endl;
	if( this != &rhs) {
		source_ = rhs.source_;
		uid_ = rhs.serial_number_++;
	}
	return *this;
}

std::ostream& operator<<( std::ostream& out, const Storey& rhs) { 
	out << "Storey " << &rhs <<  ": id=" << rhs.uid_ << ", source = " << rhs.source_;
	return out; 
}

