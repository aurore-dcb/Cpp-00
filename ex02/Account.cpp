/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:39:15 by aducobu           #+#    #+#             */
/*   Updated: 2023/11/22 13:42:33 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
    
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
    
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
    
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
    
    return (Account::_totalNbWithdrawals);
}

int	Account::checkAmount( void ) const {
    
    return (this->_amount);
}

Account::Account( int initial_deposit ) {
    
    static int index;
    
    this->_accountIndex = index;
    this->_amount = initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    index++;
}

Account::~Account( void ) {
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

void Account::displayAccountsInfos( void ) {
    
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void ) {
    
    time_t now = time(0);
    tm* timeInfo = localtime(&now);

    std::cout << std::setfill('0') 
        << "[" << 1900 + timeInfo->tm_year
        << std::setw(2) << 1 + timeInfo->tm_mon
        << std::setw(2) << timeInfo->tm_mday << "_"
        << std::setw(2) << timeInfo->tm_hour
        << std::setw(2) << timeInfo->tm_min
        << std::setw(2) << timeInfo->tm_sec << "] ";
}

void	Account::displayStatus( void ) const {
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "withdrawal:" << "refused" << std::endl;
        return (0);
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    this->_amount -= withdrawal;
    std::cout << "amount:" << this->_amount << ";";
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return(1);
}