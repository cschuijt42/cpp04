#include "Brain.hpp"
#include <iostream>

// Constructors

Brain::Brain() {
	// Default constructor
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& src) {
	// Copy constructor
	*this = src;
	std::cout << "Brain copy constructor called." << std::endl;
}

// Operators

Brain& Brain::operator=(const Brain& src) {
	// Copy assignment operator
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain copy assignment operator called." << std::endl;
	return *this;
}

// Destructors

Brain::~Brain() {
	// Destructor
	std::cout << "Brain destructor called." << std::endl;
}
