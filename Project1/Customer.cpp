#include <iostream>
using namespace std;

Customer::Customer( string name_, string address_, int age_, string phoneNumber_, int customerNumber_)
{
    name = name_;
    address= address_;
    age = age_;
    phoneNumber = phoneNumber_;
    customerNumber = customerNumber_;

}
void Customer::setAge(int x){ age = x;} 
int Customer::getAge() { return age; }
string Customer::getName(); { return name; }
void Customer::setName(string s) { name = s; }
string Customer::getAddress() { return address; }
void Customer::setAddress(string s) { address = s; }
string Customer::getPhoneNumber() { return phoneNumber; }
void Customer::setPhoneNumber(string s) { phoneNumber = s; }
int Customer::getCustomerNumber() { return customerNumber;}
void Customer::setCustomerNumber(int x) { customerNumber = x; }
