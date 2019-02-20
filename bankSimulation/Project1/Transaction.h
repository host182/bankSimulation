#ifndef transaction_h
#define transaction_h

#include <string>

using std::string;

class Transaction {
private:
	//since there are no setters in the member function
	//once the transaction is made, it's properties cannot be changed
	int customerNumber;				//recepant of the transaction
	string transactionType;
	float amount;
	string fees;
	bool processed;
public:
	Transaction(int, string, float, string, bool);
	string processTrans();
	int getCustomerNumber();
	string getTransactionType();
	float getAmount();
	
};

#endif