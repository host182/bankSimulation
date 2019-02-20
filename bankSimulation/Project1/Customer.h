#include <iostream>
#include <string>
using namespace std;

class Customer
{
protected:
    string name; 
    string address;
    int age;
    string phoneNumber;
    int customerNumber;
public:
    
    Customer(string name_, string address_, int age_, string phoneNumber_, int customerNumber_);
    string getName();
    void setName(string s);
    string getPhoneNumber();
    void setPhoneNumber(string s);
    int getAge();
    void setAge(int x);
    int getCustomerNumber();
    void setCustomerNumber(int x);
    string getAddress();
    void setAddress(string s):

};

class Senior extends Customer
{
    private:
        double savingsInterest;
        double checkInterest;
        double checkCharge;
        double overdraftPenalty;
    public:
    Senior() : Customer()
    {
        cout << "enter your savings interest, checking interst, check charge, and overdraft penalty respectively"
        int x = 0;
        cin >> x;
        savingsInterest = x;
        cin >> x;
        checkInterest = x;
        cin >> x;
        checkCharge = x;
        cin >> x;
        overdraftPenalty = x;
    }
    double getSavingsInterest() { return savingsInterest; }
    double getCheckInterest() { return checkInterest; }
    double getCheckCharge() { return checkCharge; }
    double getOverdraftPenalty() { return overdraftPenalty; }
};

class Adult extends Customer
{
    private:
        double savingsInterest;
        double checkInterest;
        double checkCharge;
        double overdraftPenalty;
    public:
    Adult() : Customer()
    {
        cout << "enter your savings interest, checking interst, check charge, and overdraft penalty respectively"
        int x = 0;
        cin >> x;
        savingsInterest = x;
        cin >> x;
        checkInterest = x;
        cin >> x;
        checkCharge = x;
        cin >> x;
        overdraftPenalty = x;
    }
    double getSavingsInterest() { return savingsInterest; }
    double getCheckInterest() { return checkInterest; }
    double getCheckCharge() { return checkCharge; }
    double getOverdraftPenalty() { return overdraftPenalty; }
};

class Student extends Customer
{
    private:
        double savingsInterest;
        double checkInterest;
        double checkCharge;
        double overdraftPenalty;
    public:
    Student() : Customer()
    {
        cout << "enter your savings interest, checking interst, check charge, and overdraft penalty respectively"
        int x = 0;
        cin >> x;
        savingsInterest = x;
        cin >> x;
        checkInterest = x;
        cin >> x;
        checkCharge = x;
        cin >> x;
        overdraftPenalty = x;
    }
    double getSavingsInterest() { return savingsInterest; }
    double getCheckInterest() { return checkInterest; }
    double getCheckCharge() { return checkCharge; }
    double getOverdraftPenalty() { return overdraftPenalty; }
};
