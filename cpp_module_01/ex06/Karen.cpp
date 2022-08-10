#include <iostream>
#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::complain( std::string level ) {
	static const int	nfunc = 5;
	int			iswitch = -1;

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
			iswitch = i;
			break ;
		}
	}
	switch (iswitch) {
		case 0:
			(this->*(function[0]))();
		case 1:
			(this->*(function[1]))();
		case 2:
			(this->*(function[2]))();
		case 3:
			(this->*(function[3]))();
		case 4:
			(this->*(function[4]))();
			break ;
		default:
			std::cout << "Error: Invalid command. Use HELP for more information." << std::endl;
		break ;
	}
}

void	Karen::_help( void ) { std::cout << "> HELP\n" << HELPMSG << std::endl << std::endl; }
void	Karen::_debug( void ) { std::cout << "> DEBUG\n"<< DEBUGMSG << std::endl << std::endl; }
void	Karen::_info( void ) { std::cout << "> INFO\n"<< INFOMSG << std::endl << std::endl; }
void	Karen::_warning( void ) { std::cout << "> WARNING\n"<< WARNINGMSG << std::endl << std::endl; }
void	Karen::_error( void ) { std::cout << "> ERROR\n"<< ERRORMSG << std::endl << std::endl; }
