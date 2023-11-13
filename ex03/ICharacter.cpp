#include "ICharacter.hpp"

// Constructors

ICharacter::ICharacter() {
	// Default constructor
}

ICharacter::ICharacter(const ICharacter& src) {
	// Copy constructor
	*this = src;
}

// Operators

ICharacter& ICharacter::operator=(const ICharacter& src) {
	// Copy assignment operator
	return *this;
}

// Destructors

ICharacter::~ICharacter() {
	// Destructor
}
