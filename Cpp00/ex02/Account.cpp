#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t actual = std::time(NULL);
    std::cout<<std::setfill('0')<<"["<<1900 + std::localtime(&actual)->tm_year
            <<std::setw(2)<< 1 + std::localtime(&actual)->tm_mon
            <<std::setw(2)<< std::localtime(&actual)->tm_mday
            <<"_"
            <<std::setw(2)<< std::localtime(&actual)->tm_hour
            <<std::setw(2)<<std::localtime(&actual)->tm_min
            <<std::setw(2)<<std::localtime(&actual)->tm_sec
            <<"] "<<std::flush;

}


Account::Account(int initial_deposit)
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_totalAmount += this->_amount;
    this->_displayTimestamp();
    std::cout<<"index:" <<this->_accountIndex<<";"
            <<"amount:" <<this->_amount<<";"
            <<"created" <<std::endl;
}

Account::~Account(void)
{
    _nbAccounts--;
    this->_displayTimestamp();
    std::cout<<"index:" <<_accountIndex<<";"
            <<"amount:" <<_amount<<";"
            <<"closed" <<std::endl;
}

void Account::makeDeposit(int deposit)
{
    _amount += deposit;
	_totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";"
            <<"p_amount:"<< _amount - deposit<<";"
            <<"deposit:" << deposit <<";"
            <<"amount:" << _amount<< ";"
            <<"np_deposits:" << _nbDeposits<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if(withdrawal > _amount)
    {
		_displayTimestamp();
		std::cout<<"index:" <<_accountIndex<<";"
				<<"p_amount:" <<_amount<<";"
				<<"withdrawal:refused"<<std::endl;
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";"
			<<"p_amount:"<<_amount + withdrawal<<";"
			<<"withdrawal:"<<withdrawal<<";"
			<<"amount:"<<_amount<<";"
			<<"nb_withdrawal:"<<_nbWithdrawals<<std::endl;
	return(true);
}

int Account::checkAmount(void) const
{
    return 0;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout<<"index:" << _accountIndex << ";"
			<<"amount:" << _amount << ";"
			<<"deposits:" << _nbDeposits<< ";"
			<<"withdrawals:" << _nbWithdrawals<<std::endl;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout<<"accounts:"<<getNbAccounts()<<";"
            <<"total:"<<getTotalAmount()<<";"
            <<"deposit:"<<getNbDeposits()<<";"
            <<"withdrawals:"<<getNbWithdrawals()<<std::endl;
}
