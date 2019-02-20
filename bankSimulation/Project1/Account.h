#ifndef _Account_H_
#define _Acoount_H_
#include <string>
using namespace std;

class Account{
protected:
    double _Balance = 0.0;
    int _Account_Number;
    Transaction* transactionArray;
    Customer _customer;

public:
    Account(int _Account_Number, Customer customer);

    double getBalance();
    string getCustomer();
    string to_string();
    void setCustomer();
    void setBalance();
    virtual double deposit() = 0;
    virtual double withdraw() = 0;
    virtual double add_intrest() = 0;
};

    #endif
