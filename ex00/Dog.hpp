#ifndef H_Dog
#define H_Dog
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		Dog(const Dog& src);

		Dog& operator=(const Dog& src);

		~Dog();

		void makeSound( void ) const;
};

#endif
