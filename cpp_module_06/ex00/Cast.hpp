#ifndef CAST_HPP_
# define CAST_HPP_

# include <string>

class Cast {
	public:
		Cast( void );
		~Cast( void );
		Cast( const Cast& copy );

		Cast& operator=( const Cast& lhs );

		static void	cast( const std::string& lit );
		std::string	getFunnyType() const;
	private:
		std::string	_funnyTypes;
		bool	toChar( const std::string& lit );
		bool	toInt( const std::string& lit );
		bool	toFloat( const std::string& lit );
		bool	toDouble( const std::string& lit );
};

#endif
