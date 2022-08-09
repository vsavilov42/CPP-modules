#ifndef SED_HPP_
# define SED_HPP_

# include <string>

# define USAGE "Error: Usage: [Filename], [String1], [String2]."
# define EMPTYFILE "Error: Empty argument."
# define OPENERROR "Error: Can not open the file "

class Sed {
	public:
		Sed( std::string const filename, std::string const &s1, std::string const &s2 );
		~Sed();

		static bool	manageFile( std::string const file, std::string const s1, std::string const s2 );
	private:
		std::string	_sedReplace( void );
		
		std::string const	_filename;
		std::string const	&_s1;
		std::string const	&_s2;
};

#endif
