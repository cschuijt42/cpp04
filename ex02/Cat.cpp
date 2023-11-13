#include "Cat.hpp"
#include <iostream>

// Constructors

Cat::Cat() {
	// Default constructor
	this->type = "Cat";
	this->brain = new Brain();
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
	this->brain = new Brain(*(src.brain));
	std::cout << "Cat copy assignment operator called." << std::endl;
	return *this;
}

// Getters

const Brain* Cat::getBrain() const {
	return this->brain;
}

// Destructors

Cat::~Cat() {
	// Destructor
	delete this->brain;
	std::cout << "Cat destructor called." << std::endl;
}

// Class methods

void Cat::makeSound( void ) const {
	std::cout << "Meow!" << std::endl;
}
