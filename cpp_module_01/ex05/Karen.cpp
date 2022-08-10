#include <iostream>
#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::complain( std::string level ) {
	static const int nfunc= 5;

	std::string functions[nfunc] = {
		"HELP",
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	//typedef void	(Karen::*f)() function[n function];
	f function[nfunc] = {
		&Karen::_help,
		&Karen::_debug,
		&Karen::_info,
		&Karen::_warning,
		&Karen::_error
	};
	for (int i = 0; i < nfunc; i++) {
		if (!functions[i].compare(level)) {
			(this->*(function[i]))();
			return ;
		}
	}
	std::cout << "Error: Invalid command. Use HELP for more information." << std::endl;
}

void	Karen::_help( void ) { std::cout << "> HELP\n\n" << HELPMSG << std::endl; }
void	Karen::_debug( void ) { std::cout << "> DEBUG\n\n"<< DEBUGMSG << std::endl; }
void	Karen::_info( void ) { std::cout << "> INFO\n\n"<< INFOMSG << std::endl; }
void	Karen::_warning( void ) { std::cout << "> WARNING\n\n"<< WARNINGMSG << std::endl; }
void	Karen::_error( void ) { std::cout << "> ERROR\n\n"<< ERRORMSG << std::endl; }
