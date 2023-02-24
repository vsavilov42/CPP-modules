#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ){ }

Bureaucrat::Bureaucrat( const std::string name, int grade ):_name(name), _grade(grade) {
	std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat destroyed" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& copy ):_name(copy._name) {
	*this = copy;
	std::cout << "Bureaucrat copied" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& lhs ) {
	this->_grade = lhs._grade;

	return *this;
}

std::ostream &operator<<( std::ostream& os, const Bureaucrat& lhs ) {
	os << "Name: " << lhs.getName() << ", Grade: " << lhs.getGrade();
	return os;
}

const std::string& Bureaucrat::getName( void ) const {
	return this->_name;
}

int Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void Bureaucrat::validGrade( int grade ) {
	if (grade < this->maxGrade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > this->minGrade)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm( Form& form ) const {
	form.beSigned(*this);
}

void Bureaucrat::execute( const Form& form ) const {
	try {
		form.beExecuted(*this);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return "Exception: Grade too low";
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return "Exception: Grade too high";
}

void Bureaucrat::decrement( void ) {
	std::cout << "Grade decremented by 1" << std::endl;
	this->validGrade(this->_grade + 1);
	this->_grade += 1;
}

void Bureaucrat::decrement( int n ) {
	std::cout << "Grade decrementend by " << n << std::endl;
	this->validGrade(this->_grade + n);
	this->_grade += n;
}

void Bureaucrat::increment() {
	std::cout << "Grade incremented by 1" << std::endl;
	this->validGrade(this->_grade - 1);
	this->_grade -= 1;
}

void Bureaucrat::increment( int n ) {
	std::cout << "Grade incremented by " << n << std::endl;
	this->validGrade(this->_grade - n);
	this->_grade -= n;
}
