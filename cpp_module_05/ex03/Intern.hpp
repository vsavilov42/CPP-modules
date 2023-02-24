#ifndef INTERN_HPP_
# define INTERN_HPP_

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern( void );
		~Intern( void );
		Intern( const Intern& copy );
		Intern& operator=( const Intern& lhs );

		Form* makeForm( std::string name, std::string target );
	private:
		typedef Form* (Intern::*f)( std::string target );

		Form*	_presidentialPardon( std::string target );
		Form*	_shrubberyCreation( std::string target );
		Form*	_robotomyRequest( std::string target );
};

#endif
