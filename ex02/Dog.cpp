#include "Dog.hpp"
#include <iostream>

// Constructors

Dog::Dog() {
	// Default constructor
	this->type = "Dog";
	this->brain = new Brain();
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
	this->brain = new Brain(*(src.brain));
	std::cout << "Dog copy assignment operator called." << std::endl;
	return *this;
}

// Destructors

Dog::~Dog() {
	// Destructor
	delete this->brain;
	std::cout << "Dog destructor called." << std::endl;
}

// Getters

const Brain* Dog::getBrain() const {
	return this->brain;
}

// Class methods

void Dog::makeSound( void ) const {
	std::cout << "Bark!" << std::endl;
}
