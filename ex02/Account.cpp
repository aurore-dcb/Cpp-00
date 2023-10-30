/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:39:15 by aducobu           #+#    #+#             */
/*   Updated: 2023/10/30 15:47:22 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
    
    static int index;
    
    Account::_accountIndex = index;
    Account::_amount = initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
    _nbAccounts++;
    _totalAmount += _amount;
    index++;
}

Account::~Account( void ) {
    
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void Account::displayAccountsInfos( void ) {
    
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << ";" << std::endl;
}

void Account::_displayTimestamp( void ) {
    
    time_t now = time(0);
    tm* timeInfo = localtime(&now);

    std::cout << "[" << 1900 + timeInfo->tm_year;
    std::cout << 1 + timeInfo->tm_mon;
    std::cout << timeInfo->tm_mday << "_";
    std::cout << timeInfo->tm_hour;
    std::cout << timeInfo->tm_min;
    std::cout << timeInfo->tm_sec << "] ";
}

void	Account::displayStatus( void ) const {
    
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << ";" << std::endl;
}