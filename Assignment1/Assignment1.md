#Assignment1
#### Name: شذا اسماعيل قعود Shaza Ismail Kaoud
#### B.N.: 33761
Chapter Review
--------------
1. What is a class?
    -class is a user defined type.
    -class in C++ includes private data members and public function members **methods**.
2. How does a class accomplish abstraction, encapsulation, and data hiding?
    -**abstraction**: by hiding the details of implementation.
    -**encapsulation**: by combining the data to methods to manipulate them, so the data is accessed except by using those methods.
    -**data hiding**: by making data members private/protected, so they are protected from outside world **other functions or classes**
3. What is the relationship between an object and a class?
    -an object is an instance of a class
4. In what way, aside from being functions, are class function members different from class data members?
    -class function members are usually public while data members are usually private
5. Define a class to represent a bank account. Data members should include the depositor’s name, the account number (use a string), and the balance. Member functions should allow the following:
    1. Creating an object and initializing it.
    2. Displaying the depositor’s name, account number, and balance
    3. Depositing an amount of money given by an argument
    4. Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations. (Programming Exercise 1 provides you with an opportunity to write the implementation.)
    ```C++
    class Account{
      private:
      std::string name;
      std::string accountNumber;
      double balance;
      public:
      Account();
      Account(std::string n, std::string acc, double b);
      void displayAccount();
      void deposit(double amount);
      void withdraw(double amount);
    };
    ```
6. When are class constructors called? When are class destructors called?
    -constructors are called when an object is created.
    -destructors are called when an object is destroyed.
7. Provide code for a constructor for the bank account class from Chapter Review Question 5.
    ```C++

      //just method declaration
      Account::Account(std::string n, std::string acc, double b){
        name = n;
        accountNumber = acc;
        balance = b;
      }
    ```
8. What is a default constructor? What is the advantage of having one?
    -**default constructor**: is a constructor with the same name as the class with no parameters.
    -the advantage of having a one is to not initialize an object with rubish data and have initial valid data defined for object data members.
9. Modify the Stock class definition (the version in stock20.h ) so that it has member functions that return the values of the individual data members. Note:A member that returns the company name should not provide a weapon for altering the array. That is, it can’t simply return a string reference. It could return a const reference. 
    ```C++

    // stock20.h -- augmented version
    #ifndef STOCK20_H_
    #define STOCK20_H_
    #include <string>
    class Stock
    {
    private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
    public:
    Stock();
    // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();
    // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const *Stock & topval(const Stock & s) const;
    string const & return_company();
    int const & return_shares();
    double const & return_share_val();
    double const & return_total_val();    
    }; 
    #endif
    ```
10. What are this and *this ?
    -this is a pointer to the current object, while
    -*this is a reference to the object 
    & they differ that a function that return this, it returns a pointer to the current object, while a function that returns *this returns a "clone" of the current object

