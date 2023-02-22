#ifndef SHRUBBERYCREATIONFORM_HPP_
# define SHRUBBERYCREATIONFORM_HPP_

# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm( const std::string& form );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm& copy );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& lhs );
	
		void execForm( void ) const;
	private:
		ShrubberyCreationForm( void );
};

#endif
