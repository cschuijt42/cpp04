#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
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
	return 0;
}
