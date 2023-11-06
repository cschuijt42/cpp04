#include "WrongCat.hpp"
#include <iostream>

// Constructors

WrongCat::WrongCat() {
	// Default constructor
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) {
	// Copy constructor
	*this = src;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

// Operators

WrongCat& WrongCat::operator=(const WrongCat& src) {
	// Copy assignment operator
	this->type = src.getType();
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	return *this;
}

// Destructors

WrongCat::~WrongCat() {
	// Destructor
	std::cout << "WrongCat destructor called." << std::endl;
}
