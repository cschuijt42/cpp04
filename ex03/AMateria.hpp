#pragma once
#include <string>

// Cyclic dependency between these two classes, forward declaring to resolve
class ICharacter;

class AMateria {
	public:
		AMateria(std::string const & type);

		AMateria& operator=(const AMateria& src);

		std::string const & getType( void ) const;

		virtual ~AMateria();

		virtual AMateria* clone( void ) const = 0;
		virtual void use(ICharacter& target);

	protected:
		AMateria( void );
		AMateria(const AMateria& src);

		const std::string type;
};
