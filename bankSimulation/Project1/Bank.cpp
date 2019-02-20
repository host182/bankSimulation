#include "Bank.h"

//need to check for the input data - can make a function 


//this function adds the account from addAccount
//should only be called from addAccount
bool Bank::addOnAccountArray(Account * accountToBeAdded)
{
	Account** extendedArray = new Account*[arraySize + 1];
	extendedArray[arraySize] = accountToBeAdded;			//the last pointer in the array is the passed account pointer
	for (int i = 0; i < arraySize; i++)
		extendedArray[i] = accountArray[i];
	delete[] accountArray;
	accountArray = extendedArray;
	return true;
}

Bank::Bank(Account ** arrayPointer)
{
	accountArray = arrayPointer;
	arraySize = sizeof(accountArray) / sizeof(accountArray[0]);
}

bool Bank::addAccount()
{
	Account* newAccount = new Account();			//should have a different constructor according to the Account class
	addOnAccountArray(newAccount);
	return false;
}

bool Bank::makeDeposit()
{
	int accountIndex;
	float deposit;
	std::cout << "Which accocunt do you want to deposit to?: ";				//need to change this input to the accoutn number and make a function that searches for the account
	std::cin >> accountIndex;
	std::cout << "Enter the amount you want to deposit: ";
	std::cin >> deposit;
	accountArray[accountIndex]->setBalance() = accountArray[accountIndex]->getBalance() + deposit;
	return true;
}

bool Bank::makeWithdrawal()
{
	int accountIndex;
	float withdraw;
	std::cout << "Which accocunt do you want to deposit to?: ";
	std::cin >> accountIndex;
	std::cout << "Enter the amount you want to withdraw: ";
	std::cin >> withdraw;
	accountArray[accountIndex]->setBalance() = accountArray[accountIndex]->getBalance() - withdraw;
	return true;
}

Account ** Bank::getAccountArray()
{
	return accountArray;
}

int Bank::getAccount(int accNumber) {
	for (int i = 0; i < arraySize; i++)
		if (accNumber == accountArray[i]->getNumber())
			return i;
	return -1;
}
