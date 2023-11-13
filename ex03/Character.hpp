#pragma once
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character( void );
		Character(const Character& src);
		Character(const std::string& name);

		Character& operator=(const Character& src);

		std::string const & getName() const;

		~Character();

		void equip(AMateria* materia);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string name;
		AMateria* inventory[4];
};
