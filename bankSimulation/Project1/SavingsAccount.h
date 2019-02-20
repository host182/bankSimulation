#ifndef _SavingsAccount_H_
#define _SavingsAccount_H_
#include "Account.h"

class savingsAccount : public Account{
public:
    savingsAccount(int _Account_Number, Customer customer) : Account(int _Account_Number, Customer customer){}

    double deposit();
    double withdraw();
    double add_Intrest();
};    
    #endif
