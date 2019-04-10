#include <iostream>
#include "account.h"

using namespace std;

Account::Account(float balance) : m_balance(balance)
{

}

void Account::credit(float cred)
{
    this->m_balance += cred;
}

void Account::debit(float deb)
{
    if(this->m_balance - deb >= 0)
    {
        this->m_balance -= deb;
    }
    else
    {
        cout << "Warning: Not enough funds" << endl;
    }
    
}