#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ):Form("presidential pardon", "none", 25, 5) { }

PresidentialPardonForm::PresidentialPardonForm( const std::string& form )
	:Form("presidential pardon", form, 25, 5) {
	std::cout << "Presidential pardon form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& copy )
	:Form(copy.getName(), copy.getTarget(), copy.getSignGrade(), copy.getExecGrade()) {
	std::cout << "Copy Presidential pardon form called" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "Presidential Pardon Form destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& lhs ) {
	std::cout << "Presidential Pardon Form operator = called" << std::endl;
	(void)lhs;
	return *this;
}

void PresidentialPardonForm::execForm( void ) const {
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
