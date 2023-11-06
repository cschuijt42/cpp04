#ifndef H_WrongCat
#define H_WrongCat
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat(const WrongCat& src);

		WrongCat& operator=(const WrongCat& src);

		~WrongCat();
};

#endif
