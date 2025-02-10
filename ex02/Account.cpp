/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha <frocha@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:23:40 by frocha            #+#    #+#             */
/*   Updated: 2025/02/10 13:23:41 by frocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

void   Account::_displayTimestamp( void )
{
    std::time_t t = std::time(NULL);
    std::tm* now = std::localtime(&t);
    char str_time_formatted[20];
    std::strftime(str_time_formatted, sizeof(str_time_formatted), "[%Y%m%d_%H%M%S] ", now);
    std::cout << str_time_formatted ;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals();
    std::cout << "\n";
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";closed" << std::endl;
}

Account::Account(void)
{
    Account::_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
}

Account::Account(int initial_deposit)
{
    Account::_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";created" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex;
    
    std::cout << ";p_amount:" << Account::_amount;
    std::cout << ";deposit:" << deposit;
    Account::_amount += deposit;
    std::cout << ";amount:" << Account::_amount;
    Account::_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << ";nb_deposits:" << Account::_nbDeposits;
    std::cout << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex;
    
    std::cout << ";p_amount:" << Account::_amount;
    if (Account::_amount - withdrawal < 0)
    {
        std::cout << ";withdrawal:refused";
        std::cout << "\n";
        return false;
    }
    else
    {
        std::cout << ";withdrawal:" << withdrawal;
        Account::_amount -= withdrawal;
        std::cout << ";amount:" << Account::_amount;
        Account::_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals;
        std::cout << "\n";
        return true;
    }
}

int		Account::checkAmount( void ) const
{
    return Account::getTotalAmount();
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex 
    << ";amount:" << Account::_amount 
    << ";deposits:" << Account::_nbDeposits
    << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}
