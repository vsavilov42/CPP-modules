#ifndef FORM_HPP_
# define FORM_HPP_

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form( const std::string& name, int signGrade, int execGrade );
		~Form( void );
		Form( const Form& copy );
		Form& operator=( const Form& lhs );

		const std::string& getName( void ) const;
		bool getSigned( void ) const;
		int getSignGrade( void ) const;
		int getExecGrade( void ) const;

		void beSigned( const Bureaucrat& bureaucrat );

		class GradeTooHighException : public std::exception {
			public: const char* what() const;
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const;
		};
	private:
		Form( void );

		const std::string	_name;
		const int		_signGrade;
		const int		_execGrade;
		bool			_signed;
};

std::ostream& operator<<( std::ostream& os, const Form& lhs );

#endif
