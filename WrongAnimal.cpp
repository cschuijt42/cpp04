#include "WrongAnimal.hpp"
#include <iostream>

// Constructors

WrongAnimal::WrongAnimal() {
	// Default constructor
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	// Copy constructor
	*this = src;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

// Operators

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	// Copy assignment operator
	this->type = src.getType();
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	return *this;
}

// Destructors

WrongAnimal::~WrongAnimal() {
	// Destructor
	std::cout << "WrongAnimal destructor called." << std::endl;
}

// Getters

const std::string& WrongAnimal::getType( void ) const {
	return this->type;
}

// Class methods

void WrongAnimal::makeSound( void ) const {
	std::cout << "Generic wrong animal noise" << std::endl;
}
