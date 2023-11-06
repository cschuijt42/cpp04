#ifndef H_WrongAnimal
#define H_WrongAnimal
#include <string>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal(const WrongAnimal& src);

		WrongAnimal& operator=(const WrongAnimal& src);

		~WrongAnimal();

		const std::string& getType( void ) const;

		void makeSound( void ) const;

	protected:
		std::string type = "WrongAnimal";
};

#endif
