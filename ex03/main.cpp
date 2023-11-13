#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main( void ) {
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	{
		IMateriaSource* src  = new MateriaSource();
		IMateriaSource* src2 = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		src2->learnMateria(new Ice());

		*src = *src2;

		delete src;
		delete src2;
	}

	return 0;
}
