#include "Dog.hpp"
#include <iostream>

// Constructors

Dog::Dog() {
	// Default constructor
	this->type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	// Copy constructor
	*this = src;
	std::cout << "Dog copy constructor called." << std::endl;
}

// Operators

Dog& Dog::operator=(const Dog& src) {
	// Copy assignment operator
	this->type = src.getType();
	std::cout << "Dog copy assignment operator called." << std::endl;
	return *this;
}

// Destructors

Dog::~Dog() {
	// Destructor
	std::cout << "Dog destructor called." << std::endl;
}

// Class methods

void Dog::makeSound( void ) const {
	std::cout << "Bark!" << std::endl;
}
