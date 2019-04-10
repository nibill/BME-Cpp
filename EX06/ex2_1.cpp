#include <iostream>
#include "checkingaccount.h"
#include "ex2_1.h"

void ex2_1()
{
    CheckingAccount myAccount(1000, 0.5); // initial amount and fee
    myAccount.credit(250);    // ok
    myAccount.printBalance(); // -> 1250
    myAccount.debit(1000);    // ok
    myAccount.printBalance(); // -> 249.5
    myAccount.debit(249.5);   // Waring: Not enough funds
    myAccount.debit(249);     // ok
    myAccount.printBalance(); // -> 0
}
