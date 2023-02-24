#ifndef PRESIDENTIALPARDONFORM_HPP_
# define PRESIDENTIALPARDONFORM_HPP_

# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm( const std::string& form );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm& copy );
		PresidentialPardonForm& operator=( const PresidentialPardonForm& lhs );

		void execForm( void ) const;
	private:
		PresidentialPardonForm( void );
};

#endif
