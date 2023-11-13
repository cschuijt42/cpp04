#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	public:
		Cure( void );
		Cure(const Cure& src);

		Cure& operator=(const Cure& src);

		~Cure();

		AMateria* clone( void ) const;
		void use(ICharacter& target);
};
