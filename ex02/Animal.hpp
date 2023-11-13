#ifndef H_Animal
#define H_Animal
#include <string>

class Animal {
	public:
		Animal& operator=(const Animal& src);

		virtual ~Animal();

		const std::string& getType( void ) const;

		virtual void makeSound( void ) const;

	protected:
		std::string type = "Animal";
		Animal( void );
		Animal(const Animal& src);
};

#endif
