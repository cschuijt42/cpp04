#include "Cure.hpp"
#include <iostream>

// Constructors

Cure::Cure() : AMateria("cure") {
	// Default constructor
}

Cure::Cure(const Cure& src) : AMateria(src) {
	// Copy constructor
	*this = src;
}

// Operators

Cure& Cure::operator=(const Cure& src) {
	// Copy assignment operator
	(void)src;
	return *this;
}

// Destructors

Cure::~Cure() {
	// Destructor
}

// Member functions

AMateria* Cure::clone( void ) const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName()
			  << "'s wounds *" << std::endl;
}
