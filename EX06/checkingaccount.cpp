#include <iostream>
#include "checkingaccount.h"

using namespace std;

CheckingAccount::CheckingAccount(float balance, float fee) : Account(balance), m_fee(fee)
{
    cout << "Initial amount: " << balance << endl;
    cout << "Initial fee: " << fee << endl;
}

void CheckingAccount::printBalance()
{
    cout << "Current balance: " << this->m_balance << endl;
}

void CheckingAccount::debit(float deb)
{
    Account::debit(deb + this->m_fee);
}