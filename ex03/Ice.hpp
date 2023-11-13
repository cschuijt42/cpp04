#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		Ice(const Ice& src);

		Ice& operator=(const Ice& src);

		~Ice();

		AMateria* clone( void ) const;
		void use(ICharacter& target);
};
