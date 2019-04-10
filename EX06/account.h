#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
protected:
    float m_balance{0.0};

public:
    Account(float balance);
    void credit(float cred);
    void debit(float deb);
};

#endif // ACCOUNT_H