#include "Ice.hpp"
#include <iostream>

// Constructors

Ice::Ice() : AMateria("ice") {
	// Default constructor
}

Ice::Ice(const Ice& src) : AMateria(src) {
	// Copy constructor
	*this = src;
}

// Operators

Ice& Ice::operator=(const Ice& src) {
	// Copy assignment operator
	(void)src;
	return *this;
}

// Destructors

Ice::~Ice() {
	// Destructor
}

// Member functions

AMateria* Ice::clone( void ) const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at "
			  << target.getName() << " *" << std::endl;
}
