#ifndef bank_h
#define bank_h

#include "Account.h"
#include <iostream>

class Bank {
private:
	Account** accountArray;				//this array is a collection of pointers, so it has 2 *s
	int arraySize;
	bool addOnAccountArray(Account*);			//private function because I only want bank to access it
	int getAccount(int);						//this function is a bit counter intuitive (returns int instead of Account* or Account),
public:											//so i have it as private
	Bank(Account**);
	bool addAccount();
	bool makeDeposit();
	bool makeWithdrawal();
	Account** getAccountArray();
};

#endif