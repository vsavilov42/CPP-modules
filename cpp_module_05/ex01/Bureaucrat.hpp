#ifndef BUREAUCRAT_HPP_
# define BUREAUCRAT_HPP_

# include <string>
# include <exception> /* what() -> return null terminated for identify exception */
# include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat( const std::string name, int grade );
		~Bureaucrat( void );
		Bureaucrat( const Bureaucrat& copy );

		Bureaucrat& operator=( const Bureaucrat& lhs );

		const static int maxGrade = 1;
		const static int minGrade = 150;

		const std::string& getName( void ) const;
		int getGrade( void ) const ;

		void increment();
		void increment( int n );

		void decrement();
		void decrement( int n );

		void validGrade( int grade );
		void signForm( Form& form );

		class GradeTooHighException : public std::exception {
			public: const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public: const char *what() const throw();
		};
	private:
		Bureaucrat( void );

		const std::string	_name;
		int			_grade;
};

std::ostream &operator<<( std::ostream& os, const Bureaucrat& lhs );

#endif
