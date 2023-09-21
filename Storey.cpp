#include "Storey.h"

int Storey::serial_number_ = 1;

Storey::Storey(): source_(serial_number_), uid_(serial_number_) {
	++ serial_number_;
	std::cout << "Storey::Storey(): id = " << uid_ << " at " << this << std::endl;
}

Storey::Storey(const Storey& rhs): uid_(serial_number_ ++) {
        std::cout << "Storey::Storey(): id = " << uid_ << " at " << this << std::endl;
}


