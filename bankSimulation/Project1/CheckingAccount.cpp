#include <iostream>
#include "savingsAccount.h"
using namespace std;

double checkingAccount::deposit(){
    double deposit;
    cout << "How much would you like to deposit today?";
    cin >> deposit;
    _Balance = deposit + _Balance;
}

double checkingAccount::withdraw(){
    double withdraw;
    cout << "How much would you like to withdraw today?";
    cin >> withdraw;
    _Balance =  _Balance - withdraw;
}

double checkingAccount::add_Intrest(){
    double inputIntrest;
    double intrest = 0;
    cout << "How much intrest would you like to add today?";
    cin >> inputIntrest;
    intrest = intrest + inputIntrest 
}
