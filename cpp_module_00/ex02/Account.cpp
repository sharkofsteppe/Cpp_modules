#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
	std::time_t result = std::time(0);

	tm utc_tm = *localtime(&result);
	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std::setw(2) << utc_tm.tm_mon
			<< std::setw(2) << utc_tm.tm_mday << "_"
			<< std::setw(2) << utc_tm.tm_hour
			<< std::setw(2) << utc_tm.tm_min
			<< std::setw(2) << utc_tm.tm_sec << "] ";
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int				Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int				Account::getTotalAmount(void)
{
	return _totalAmount;
}

int				Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int				Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" 
	<< _totalAmount << ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" 
	<< this->_amount << ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl ;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" 
	<< this->_amount - deposit << ";deposit:" << deposit 
	<< ";amount:" << _amount << ";nb_deposits:" << this->_nbDeposits
	<< std::endl ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (withdrawal < this->_amount)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;

		std::cout << "index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << ";withdrawal:" << withdrawal 
		<< ";amount:" << _amount << ";nb_withdrawals:" << this->_nbWithdrawals
		<< std::endl;
		return (true);
	}
	else
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << "withdrawal:refused" << std::endl;
	}
	return (false);
}

