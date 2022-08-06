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

	//get time
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";"
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

void	Account::makeDeposit( int deposit ) {
	int	p_amount = this->_amount;

	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	//get_time
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount" << p_amount << ";"
		<< "deposit:" << deposit << ";" << "amount:" << this->_amount << ";"
		<< "nb_deposits:" << this->_nbDeposits << ";" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int	p_amount = this->_amount;

	//get_time
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << p_amount << ";";
	if (withdrawal < p_amount) {
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		
		std::cout << "withdrawal:" << withdrawal << ";" << "amount:" << this->_amount << ";"
			<< "nb_withdrawals:" << this->_totalNbWithdrawals << ";" << std::endl;
		return true;
	} else {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
}

int	Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	//get_time
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";" << "withdrawals:"
		<< this-> _nbWithdrawals << ";" << std::endl;	
}
