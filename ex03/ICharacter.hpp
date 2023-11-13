#ifndef H_ICharacter
#define H_ICharacter

class ICharacter {
	public:
		ICharacter( void );
		ICharacter(const ICharacter& src);

		ICharacter& operator=(const ICharacter& src);

		~ICharacter();

	protected:
		std::string name;
};

#endif
