#include "MateriaSource.hpp"

// Constructors

MateriaSource::MateriaSource() {
	// Default constructor
	for (size_t i = 0; i < 4; i++)
		this->memory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	// Copy constructor
	*this = src;
}

// Operators

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	// Copy assignment operator
	for (size_t i = 0; i < 4; i++) {
		if (this->memory[i] != nullptr)
			delete this->memory[i];
		this->memory[i] = src.memory[i]->clone();
	}

	return *this;
}

// Destructors

MateriaSource::~MateriaSource() {
	// Destructor
	for (size_t i = 0; i < 4; i++) {
		if (this->memory[i] != nullptr)
			delete this->memory[i];
	}
}

// Member functions

void MateriaSource::learnMateria(AMateria* materia) {
	for (size_t i = 0; i < 4; i++) {
		if (this->memory[i] == nullptr) {
			this->memory[i] = materia;
			return;
		}
	}
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (size_t i = 0; i < 4; i++) {
		if (this->memory[i]->getType() == type)
			return this->memory[i]->clone();
	}

	return 0;
}
