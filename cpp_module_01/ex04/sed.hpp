#ifndef SED_HPP_
# define SED_HPP_

# include <string>

# define USAGE "Error: Usage: [Filename], [String1], [String2]."
# define EMPTYFILE "Error: Empty argument."
# define OPENERROR "Error: Can not open the file "

class Sed {
	public:
		Sed( std::string  const filename, std::string s1, std::string s2 );
		~Sed();

		std::string	sedReplace( void );
		static bool		manageFile( std::string const file, std::string s1, std::string s2 );
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
};

#endif
