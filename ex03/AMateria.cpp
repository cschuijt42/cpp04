#include "AMateria.hpp"

// Constructors

AMateria::AMateria() {
	// Default constructor
}

AMateria::AMateria(const AMateria& src) {
	// Copy constructor
	*this = src;
}

AMateria::AMateria(std::string const & type) {
	// Type constructor
	this->type = type;
}

// Operators

AMateria& AMateria::operator=(const AMateria& src) {
	// Copy assignment operator
	return *this;
}

// Getters

std::string const & AMateria::getType( void ) const {

}

// Destructors

AMateria::~AMateria() {
	// Destructor
}

// Member functions

void AMateria::use(ICharacter& target) {

}
