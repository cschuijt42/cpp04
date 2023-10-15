#include "Animal.hpp"
#include <iostream>

// Constructors

Animal::Animal() {
	// Default constructor
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& src) {
	// Copy constructor
	*this = src;
	std::cout << "Animal copy constructor called." << std::endl;
}

// Operators

Animal& Animal::operator=(const Animal& src) {
	// Copy assignment operator
	this->type = src.getType();
	std::cout << "Animal copy assignment operator called." << std::endl;
	return *this;
}

// Destructors

Animal::~Animal() {
	// Destructor
	std::cout << "Animal destructor called." << std::endl;
}

// Getters

const std::string& Animal::getType( void ) const {
	return this->type;
}

// Class methods

void Animal::makeSound( void ) const {
	std::cout << "???" << std::endl;
}
