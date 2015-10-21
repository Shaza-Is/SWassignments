
#include "account.cpp"
#include <iostream>
using namespace std;
int main()
{
    Account a("aa","344", 500);
    a.deposit(50);
    a.displayAccount();
    a.withdraw(20);
    a.displayAccount();
    return 0;

}

