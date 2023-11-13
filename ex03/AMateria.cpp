#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

// Constructors

AMateria::AMateria() {
	// Default constructor
}

AMateria::AMateria(const AMateria& src) : type(src.getType()) {
	// Copy constructor
	*this = src;
}

AMateria::AMateria(std::string const & type) : type(type) {
	// Type constructor
}

// Operators

AMateria& AMateria::operator=(const AMateria& src) {
	// Copy assignment operator

	// There's nothing we can really do here, right?
	(void)src;
	return *this;
}

// Getters

std::string const & AMateria::getType( void ) const {
	return this->type;
}

// Destructors

AMateria::~AMateria() {
	// Destructor
}

// Member functions

void AMateria::use(ICharacter& target) {
	std::cout << "* nothing happens to "             << target.getName()
			  << " because this is the base class *" << std::endl;
}
