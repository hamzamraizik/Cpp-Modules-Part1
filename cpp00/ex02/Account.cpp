#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit){
    // initialize the infos of the account
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    // modify the static variables
    _nbAccounts++;
    _totalAmount += initial_deposit;
    // display the timestamp
    _displayTimestamp();
    // display the creation of the account
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

int Account::getNbAccounts(void){
    return (_nbAccounts);
}

int Account::getNbDeposits(void){
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void){
    return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" 
        << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

int Account::getTotalAmount(void) {
    return (_totalAmount);
}



void Account::makeDeposit(int deposit){
    // i store it to display it
    int pre_amount = _amount;

    // then i updated it
    _amount += deposit;
    _nbDeposits++;

    // i update the total infos
    _totalAmount += deposit;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";p_amount:" << pre_amount
        << ";deposit:" << deposit
        << ";amount:" << _amount
        << ";nb_deposits:" << _nbDeposits
        << "\n";
}

bool Account::makeWithdrawal(int withdrawal){
    _displayTimestamp();
    // if there is No enough amount
   if (withdrawal > _amount) {
        std::cout << "index:" << _accountIndex 
                 << ";p_amount:" << _amount
                 << ";withdrawal:refused" 
                 << "\n";
        return false;
    }
    int p_amount = _amount;

    // there is enough amount
    _amount -= withdrawal;
    _nbWithdrawals++;

    // update total infos
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    // success message
    std::cout << "index:" << _accountIndex 
              << ";p_amount:" << p_amount
              << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals 
              << "\n";

    return true;
}

int Account::checkAmount(void) const{
    return (_amount);
}

void Account::displayStatus(void)const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals
    << "\n";
}

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);
    std::cout << "["
              << 1900 + localTime->tm_year
              << (localTime->tm_mon + 1 < 10 ? "0" : "") << localTime->tm_mon + 1
              << (localTime->tm_mday < 10 ? "0" : "") << localTime->tm_mday
              << "_"
              << (localTime->tm_hour < 10 ? "0" : "") << localTime->tm_hour
              << (localTime->tm_min < 10 ? "0" : "") << localTime->tm_min
              << (localTime->tm_sec < 10 ? "0" : "") << localTime->tm_sec
              << "] ";
}

Account::Account(void) {
}