#ifndef H_Brain
#define H_Brain
#include <string>

class Brain {
	public:
		Brain( void );
		Brain(const Brain& src);

		Brain& operator=(const Brain& src);

		~Brain();

	private:
		std::string ideas[100];
};

#endif
