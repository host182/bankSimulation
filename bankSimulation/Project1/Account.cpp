#include <iostream>
#include <string>
#include "Account.h"
#include "Customer.h"
using namespace std;

Account::Account(int _Account_Number, Customer customer){
    _Account_Number = accountNumber;
    _customer = customer;
};

double Account::getBalance(){
    return _Balance;
}

void Account::setBalance(){
        _balance = balance;

string Account::getCustomer(){
    return _customer;
}

void Account::setCustomer(){
    if(customerNumber > 0){
        _customer = customer;
    }
}

string Account::to_string(){
    to_string(accountNumber) = string accountString;
    return accountString;
}
