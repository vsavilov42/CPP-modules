#include <iostream>
#include "Cast.hpp"


Cast::Cast( void ):_funnyTypes("Paco") {
	//const std::string _funnyTypes[6] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	/*_funnyTypes[0] = "-inf";
	_funnyTypes[1] = "+inf";
	_funnyTypes[2] = "nan";
	_funnyTypes[3] = "-inff";
	_funnyTypes[4] = "+inff";
	_funnyTypes[5] = "nanf";*/
}

Cast::~Cast( void ) { }

Cast::Cast( const Cast& copy ) {
	*this = copy;
}

std::string Cast::getFunnyType() const {
	return this->_funnyTypes;
}

Cast& Cast::operator=( const Cast& lhs ) {
	static_cast<void>(lhs);
	return *this;
}

void	Cast::cast( const std::string& lit ) {
	Cast paco;
	std::string toChar = "";
	int toInt = 0;
	toInt = std::atoi(lit.c_str());
	toChar = lit;
	std::cout << paco.getFunnyType() << std::endl;
	std::cout << "Int cast: " << toInt << std::endl;
	//if (lit.size() > 1)
	//	return ;
	toChar = static_cast<char>(toInt);
	std::cout << "Char cast: " << toChar << std::endl;
}
