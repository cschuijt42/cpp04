#ifndef H_Cat
#define H_Cat
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		Cat(const Cat& src);

		Cat& operator=(const Cat& src);

		~Cat();

		const Brain* getBrain() const;

		void makeSound( void ) const;

	private:
		Brain* brain;
};

#endif
