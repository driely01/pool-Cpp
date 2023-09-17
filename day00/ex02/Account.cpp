/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:36:00 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/17 17:24:52 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account( int initial_deposit ) {

	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += this->checkAmount();
	Account::_totalNbDeposits += this->_nbDeposits;
	Account::_totalNbWithdrawals += this->_nbWithdrawals;

	_displayTimestamp();
	std::cout	<<
	"index:"	<< this->_accountIndex	<<
	";amount:"	<< this->checkAmount()	<<
	";created"	<< std::endl;
}

Account::~Account() {

	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += this->checkAmount();
	Account::_totalNbDeposits += this->_nbDeposits;
	Account::_totalNbWithdrawals += this->_nbWithdrawals;

	_displayTimestamp();
	std::cout	<<
	"index:"	<< this->_accountIndex <<
	";amount:"	<< this->checkAmount() <<
	";closed"	<< std::endl;
}

void Account::displayAccountsInfos() {

	_displayTimestamp();
	std::cout		<<
	"accounts:"		<< getNbAccounts()				<<
	";total:"		<< getTotalAmount()				<<
	";deposits:"	<< getNbDeposits()				<<
	";withdrawals:"	<< Account::_totalNbWithdrawals	<<
	std::endl; 

	Account::_totalAmount = 0;
}

void Account::displayStatus() const {

	_displayTimestamp();
	std::cout		<<
	"index:"		<< this->_accountIndex	<<
	";amount:"		<< this->checkAmount()	<<
	";deposits:"	<< this->_nbDeposits	<<
	";withdrawals:"	<< this->_nbWithdrawals	<<
	std::endl;
}

void Account::makeDeposit( int deposit ) {

	int p_amount;

	p_amount = this->checkAmount();
	this->_amount += deposit;
	this->_nbDeposits++;

	Account::_totalNbDeposits++;
	Account::_totalAmount += this->checkAmount();

	_displayTimestamp();
	std::cout		<<
	"index:"		<< this->_accountIndex	<<
	";p_amount:"	<< p_amount				<<
	";deposit:"		<< deposit				<<
	";amount:"		<< this->checkAmount()	<<
	";nb_deposits:"	<< this->_nbDeposits	<<
	std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {

	int p_amount;

	p_amount = this->checkAmount();
	if ( p_amount - withdrawal >= 0 ) {

		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
	
		Account::_totalNbWithdrawals++;
		Account::_totalAmount += this->checkAmount();

		_displayTimestamp();
		std::cout			<<
		"index:"			<< this->_accountIndex	<<
		";p_amount:" 		<< p_amount				<<
		";withdrawal:"		<< withdrawal			<<
		";amount:"			<< this->checkAmount()	<<
		";nb_withdrawals:"	<< this->_nbWithdrawals	<<
		std::endl;
	} else {
		
		Account::_totalAmount += this->checkAmount();

		_displayTimestamp();
		std::cout				<<
		"index:"				<< this->_accountIndex	<<
		";p_amount:" 			<< p_amount				<<
		";withdrawal:refused"	<< 
		std::endl;
	}
	return 1;
}

void Account::_displayTimestamp() {
	
	time_t now = time(0);

	tm *ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year;
	if ( 1 + ltm->tm_mon < 10 )
		std::cout << "0" << 1 + ltm->tm_mon;
	else
		std::cout << 1 + ltm->tm_mon;
	if ( ltm->tm_mday < 10)
		std::cout << "0" << ltm->tm_mday;
	else
	std::cout << ltm->tm_mday;
	std::cout << "_";
	if ( ltm->tm_hour < 10 )
		std::cout << "0" << ltm->tm_hour;
	else
		std::cout << ltm->tm_hour;
	if ( ltm->tm_min < 10)
		std::cout << "0" << ltm->tm_min;
	else
		std::cout << ltm->tm_min;
	if ( ltm->tm_sec < 10 )
		std::cout << "0" << ltm->tm_sec;
	else
		std::cout << ltm->tm_sec;
	std::cout << "] ";
}

int Account::checkAmount() const {
	
	return this->_amount;
}

int Account::getNbAccounts() {
	
	return Account::_nbAccounts;
}

int Account::getTotalAmount() {

	return Account::_totalAmount;
}

int Account::getNbDeposits() {

	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals() {

	return Account::_totalNbWithdrawals;
}