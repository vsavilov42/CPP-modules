#include <iostream>
#include <ctime> /* std::time() */
#include <cstdlib> /* std::srand() */
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ):Form("Robotomy request", "none", 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm( const std::string& form )
	:Form("robotomy request", form, 72, 45) {
	std::cout << "Robotomy request form created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& copy )
	:Form(copy.getName(), copy.getTarget(), copy.getSignGrade(), copy.getExecGrade()) {
	std::cout << "Copy Robotomy request form caclled" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "Robotomy request form destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& lhs ) {
	std::cout << "Robotomy Request Form operator = called" << std::endl;
	(void)lhs;
	return *this;
}

void RobotomyRequestForm::execForm( void ) const {
	std::srand(std::time(NULL));

	std::cout << "(Makes some drilling noises)" << std::endl;
	if (std::rand() % 2 == 0) {
		std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
	} else {
		std::cout << "Failed robotomized " << this->getTarget() << std::endl;
	}
}
