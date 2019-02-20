#include "Transaction.h"

Transaction::Transaction(int n, string t, float a, string f, bool p)
{
	customerNumber = n;
	transactionType = t;
	amount = a;
	fees = f;
	processed = p;
}


string Transaction::processTrans()
{
	if (!processed)
		return fees;
	else
		return "Already processed";
}

int Transaction::getCustomerNumber() { return customerNumber; }

string Transaction::getTransactionType() { return transactionType; }

float Transaction::getAmount() { return amount; }
