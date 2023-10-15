#ifndef H_Animal
#define H_Animal
#include <string>

class Animal {
	public:
		Animal( void );
		Animal(const Animal& src);

		Animal& operator=(const Animal& src);

		~Animal();

		const std::string& getType( void ) const;

		void makeSound( void ) const;

	protected:
		std::string type = "Animal";
};

#endif
