#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource( void );
		MateriaSource(const MateriaSource& src);

		MateriaSource& operator=(const MateriaSource& src);

		~MateriaSource();

		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria* memory[4];
};
