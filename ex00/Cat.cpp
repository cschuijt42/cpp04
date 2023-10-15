#include "Cat.hpp"
#include <iostream>

// Constructors

Cat::Cat() {
	// Default constructor
	this->type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	// Copy constructor
	*this = src;
	std::cout << "Cat copy constructor called." << std::endl;
}

// Operators

Cat& Cat::operator=(const Cat& src) {
	// Copy assignment operator
	this->type = src.getType();
	std::cout << "Cat copy assignment operator called." << std::endl;
	return *this;
}

// Destructors

Cat::~Cat() {
	// Destructor
	std::cout << "Cat destructor called." << std::endl;
}

// Class methods

void Cat::makeSound( void ) const {
	std::cout << "Meow!" << std::endl;
}
