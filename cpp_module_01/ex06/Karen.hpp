#ifndef KAREN_HPP_
# define KAREN_HPP_

# include <string>

# define USAGE "Error: Usage: ./Karen + \"Command\", show info with HELP"

# define HELPMSG "Karen commands: \n   DEBUG: Problem diagnostic. \n   INFO: Extense information. \n   WARNING: Potential problem. \n   ERROR: Kernel panic."

# define DEBUGMSG "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
# define INFOMSG "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"

# define WARNINGMSG "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."

# define ERRORMSG "This is unacceptable, I want to speak to the manager now."


class Karen {
	public:
		Karen();
		~Karen();

		void	complain( std::string level );
	private:
		void	_help( void );
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );

		typedef	void	(Karen::*f)();
};

#endif
