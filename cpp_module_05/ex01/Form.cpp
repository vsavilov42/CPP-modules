#include <iostream>
#include "Form.hpp"

Form::Form( void ):_name("Default"), _signGrade(150), _execGrade(150), _signed(false) { }

Form::Form( const std::string& name, int signGrade, int execGrade ):_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade),
	_signed(false) {
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form has been created" << std::endl;
}

Form::~Form( void ) {
	std::cout << "Form has been destroyed" << std::endl;
}

Form::Form( const Form& copy ):_name(copy._name),
	_signGrade(copy._signGrade),
	_execGrade(copy._execGrade),
	_signed(copy._signed) {
	std::cout << "Form copied successfully" << std::endl;
}

Form& Form::operator=( const Form& lhs ) {
	std::cout << "Form operator = called" << std::endl;
	(void)lhs;
	return *this;
}

void Form::beSigned( const Bureaucrat& bureaucrat ) {
	if (bureaucrat.getGrade() <= this->_signGrade) {
		this->_signed = true;
		std::cout << bureaucrat.getName() << " has signed "
			<< this->_name << std::endl;
	} else {
		std::cout << bureaucrat.getName() << " con't sign "
			<< this->_name << std::endl;
		throw Form::GradeTooLowException();
	}
}

const std::string& Form::getName( void ) const {
	return this->_name;
}

bool Form::getSigned( void ) const {
	return this->_signed;
}

int Form::getSignGrade( void ) const {
	return this->_signGrade;
}

int Form::getExecGrade( void ) const {
	return this->_execGrade;
}

const char *Form::GradeTooHighException::what( void ) const throw() {
	return "Exception: grade too high.";
}

const char *Form::GradeTooLowException::what( void ) const throw() {
	return "Exception: grade too low.";
}

std::ostream& operator<<( std::ostream& os, const Form& lhs ) {
	os << "- Form: " << lhs.getName() << " | Sign Grade: " << lhs.getSignGrade()
		<< " | Exec Grade: " << lhs.getExecGrade()
		<< " | isSigned: " << lhs.getSigned() << std::endl;
	return os;
}
