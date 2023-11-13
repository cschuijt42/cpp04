#include "Character.hpp"

// Constructors

Character::Character() {
	// Default constructor
	this->name = "Name";

	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(const Character& src) : ICharacter(src) {
	// Copy constructor
	*this = src;
}

Character::Character(const std::string& name) {
	// Named constructor
	this->name = name;

	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

// Operators

Character& Character::operator=(const Character& src) {
	// Copy assignment operator
	this->name = src.getName();

	for (size_t i = 0; i < 4; i++) {
		if (this->inventory[i] != nullptr)
			delete this->inventory[i];

		this->inventory[i] = src.inventory[i]->clone();
	}

	return *this;
}

// Getters

std::string const & Character::getName() const {
	return this->name;
}

// Destructors

Character::~Character() {
	// Destructor
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr)
			delete this->inventory[i];
	}

}

// Member functions

void Character::equip(AMateria* materia) {
	for (size_t i = 0; i < 4; i++) {
		if (this->inventory[i] == nullptr) {
			this->inventory[i] = materia;
			return;
		}
	}
	return;
}

void Character::unequip(int idx) {
	this->inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
	if (this->inventory[idx] == nullptr)
		return;
	else
		this->inventory[idx]->use(target);
}
