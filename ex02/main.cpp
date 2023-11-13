#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main( void ) {
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	cat->makeSound();
	dog->makeSound();

	const Cat* cat_ptr = (const Cat*)cat;
	const Cat* cat_cpy = new Cat(*(const Cat*)cat);

	std::cout << "Address of cat_ptr: " << cat_ptr << std::endl;
	std::cout << "Address of cat_cpy: " << cat_cpy << std::endl;

	std::cout << "Address of cat_ptr->brain: " << cat_ptr->getBrain() << std::endl;
	std::cout << "Address of cat_cpy->brain: " << cat_cpy->getBrain() << std::endl;

	delete dog;
	delete cat;
	delete cat_cpy;

	const Animal* array[100];
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	for (size_t i = 0; i < 100; i++)
	{
		delete array[i];
	}

	// Does not compile because Animal can't be instantiated on its own:

	// const Animal* animal1 = new Animal();
	// const Animal* animal2 = new Animal(*animal1);

	return 0;
}
