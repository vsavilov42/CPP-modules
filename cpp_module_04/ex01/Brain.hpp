#ifndef BRAIN_HPP_
# define BRAIN_HPP_

class Brain {
	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain& copy );
		Brain& operator=( const Brain& lhs );

		static const int nIdeas = 100;

		std::string ideas[nIdeas];
};

#endif
