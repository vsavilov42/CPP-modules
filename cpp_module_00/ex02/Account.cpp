#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//[time] index ?; amount ?; created. --> Constructor.
//[time] total log.
//[time] index ?; amount ?; deposits ?; withdrawals ?;
//[time] index ?; p_amount ?; deposit ?; amount ?; nb:deposits ?;
//[time] total log.
//[time] index ?; amount ?; deposits ?; withdrawals ?;
//[time] index ?; amount ?; withdrawal ? -> refused/num; amount ?; nb_withdrawals ?;
//[time] total log;
//[time] index ?; amount ?; deposits ?; withdrawals ?;
//[time] index ?; amount ?; closed. --> Destructor.

Account::Account( void ) {
	this->_accountIndex = this->_nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_nbAccounts++;
	//get time;
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";"
		<< "created" <<  std::endl;
}

Account::Account(int initial_deposit) {	
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	//get_time	
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";"
		<< "created" <<  std::endl;
}

Account::~Account() {
	//int index = 0;

	//get time
	std::cout << " index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";"
		<< "closed" << std::endl;
}

int	Account::getNbAccounts( void ) { return (Account::_nbAccounts); }
int	Account::getTotalAmount( void ) { return (Account::_totalAmount); }
int	Account::getNbDeposits( void ) { return (Account::_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (Account::_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void ) {
	//get_time
	std::cout << "accounts:" << Account::_nbAccounts << ";" << "total:" << Account::_totalAmount
		<< ";" << "deposits:" << Account::_totalNbDeposits << ";" << "withdrawals:"
		<< Account::_totalNbWithdrawals << ";" << std::endl;
}
