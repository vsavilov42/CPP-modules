#ifndef FORM_HPP_
# define FORM_HPP_

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form( const std::string& name, const std::string& target, int signGrade, int execGrade );
		virtual ~Form( void );
		Form( const Form& copy );
		Form& operator=( const Form& lhs );

		const std::string& getName( void ) const;
		const std::string& getTarget( void ) const;
		bool getSigned( void ) const;
		int getSignGrade( void ) const;
		int getExecGrade( void ) const;

		virtual void execForm( void ) const = 0;

		void beSigned( const Bureaucrat& bureaucrat );
		void beExecuted( const Bureaucrat& bureaucrat ) const;

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();
		};
		class NotSigned : public std::exception {
			public: const char* what() const throw();
		};
	private:
		Form( void );

		const std::string	_name;
		const std::string	_target;
		const int		_signGrade;
		const int		_execGrade;
		bool			_signed;
};

std::ostream& operator<<( std::ostream& os, const Form& lhs );

#endif
