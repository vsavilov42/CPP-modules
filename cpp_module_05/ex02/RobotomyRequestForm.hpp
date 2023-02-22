#ifndef ROBOTOMYREQUESTFORM_HPP_
# define ROBOTOMYREQUESTFORM_HPP_

# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm( const std::string& form );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm& copy );
		RobotomyRequestForm& operator=( const RobotomyRequestForm& lhs );

		void execForm( void ) const;
	private:
		RobotomyRequestForm( void );
};

#endif
