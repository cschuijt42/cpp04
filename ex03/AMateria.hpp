#ifndef H_AMateria
#define H_AMateria
#include "ICharacter.hpp"
#include <string>

class AMateria {
	public:
		AMateria(const AMateria& src);
		AMateria(std::string const & type);

		AMateria& operator=(const AMateria& src);

		std::string const & getType( void ) const;

		~AMateria();

		virtual AMateria* clone( void ) const = 0;
		virtual void use(ICharacter& target);

	protected:
		AMateria( void );

		std::string type;
};

#endif
