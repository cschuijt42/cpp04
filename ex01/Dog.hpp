#ifndef H_Dog
#define H_Dog
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		Dog(const Dog& src);

		Dog& operator=(const Dog& src);

		~Dog();

		const Brain* getBrain() const;

		void makeSound( void ) const;

	private:
		Brain* brain;
};

#endif
