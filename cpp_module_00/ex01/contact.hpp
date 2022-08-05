#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>

class Contact {
	public:
		Contact();
		~Contact();
		int	fillContact(int index);
		void	showTable();
		void	showInfo();

	private:
		static const int MAX_FIELDS = 5;
		int		index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phone;
		std::string	darkestSecret;
};

#endif
