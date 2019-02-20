#ifndef _checkingAccount_H_
#define _checkingAccount_H_
#include "Account.h"

class checkingAccount : public Account{
public:
    checkingAccount(int _Account_Number, Customer customer) : Account(int _Account_Number, Customer customer){}

    double deposit();
    double withdraw();
    double add_Intrest();
};    
    #endif    
