#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main( void ) {
	const Animal* a = new Animal();
	const Cat*    c = new Cat();
	const Dog*    d = new Dog();

	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;

	c->makeSound();
	d->makeSound();
	a->makeSound();

	delete(a);
	delete(c);
	delete(d);

	const WrongAnimal* wa = new WrongAnimal();
	const WrongCat*    wc = new WrongCat();

	std::cout << wa->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;

	wa->makeSound();
	wc->makeSound();

	delete(wa);
	delete(wc);

	return 0;
}
