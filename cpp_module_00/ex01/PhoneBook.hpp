#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include "contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();
	private:
		static const int	MAX_CONTACTS = 8;
		int			idContact;
		int			currentContact;
		Contact			*contact[MAX_CONTACTS];
};

#endif
