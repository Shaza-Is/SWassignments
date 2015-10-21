#include <iostream>
class Account
{
private:
      std::string name;
      std::string accountNumber;
      double balance;
      Account();
public:

    Account(std::string n, std::string acc, double b);
    void displayAccount();
    void deposit(double amount);
    void withdraw(double amount);

};


Account::Account(std::string n, std::string acc, double b){
    name = n;
    accountNumber = acc;
    balance = b;

}
void Account::displayAccount(){
    std::cout << "Depositor's name: " << name <<std::endl;
    std::cout << "Account No.: " << accountNumber <<std::endl;
    std::cout << "Balance: " << balance <<std::endl;

}
void Account::deposit(double amount){
    balance = balance + amount;
}

void Account::withdraw(double amount){
    balance = balance - amount;
}

