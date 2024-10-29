/*
Why class over struct?
    in struct the data hiding was not possible, means data will be public by default.(can be operated from anywhere.)

    but in class members are private by default

    example:
        struct MyStruct {
        int a; // public by default
         };

        class MyClass {
        int a; // private by default
        };

Struct: used for simple data structures that group together different types of data

Class: used for more complex data types that encapsulate data and behavior.
*/

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c; // Not accessible from outside the class

public:
    int d, e; // Accessible from outside the class
    void setData(int a1, int b1, int c1); // declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }

/*There is Third term which  is protected
        -->protected are similar to private, but they can also be accessed by derived classes.
*/
protected:
    int protectedVar; // Accessible in derived classes

}; // don't forget semicolon here.



// for protected
class Derived : public Employee {
public:
    void accessProtected() {
        protectedVar = 10; // Accessible here
    }
};



void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    harry.d = 34; // you can direct access public variables from the class.(d,e)
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}












// Now try to understand this example of code:

/*
#include <iostream> 
using namespace std; 

class BankAccount {
private:
    string accountNumber; // Private member to store the account number
    double balance;       // Private member to store the account balance

public:
    // Constructor to initialize the account with a number and initial balance, but for this first learn constructor.
    BankAccount(string number, double initialBalance) 
        : accountNumber(number), balance(initialBalance) {}

    // Public method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) { // Check if the deposit amount is positive
            balance += amount; // Add the amount to the balance
            cout << "Deposited: " << amount << endl; // Print the deposit amount
        }
    }

    // Public method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) { // Check if the amount is valid
            balance -= amount; // Subtract the amount from the balance
            cout << "Withdrew: " << amount << endl; // Print the withdrawal amount
        } else {
            cout << "Insufficient funds" << endl; // Print an error message
        }
    }

    // Public method to display the current balance
    void displayBalance() const {
        cout << "Balance: " << balance << endl; // Print the current balance
    }
};

int main() {
    // Create a BankAccount object with a specific account number and initial balance
    BankAccount account("123456789", 1000.0);
    
    account.deposit(500); // Deposit $500 into the account
    account.withdraw(200); // Withdraw $200 from the account
    account.displayBalance(); // Display the current balance

    // The following lines would cause errors because they attempt to access private members
    // account.balance = 500; // Error: 'balance' is private
    // account.accountNumber = "987654321"; // Error: 'accountNumber' is private

    return 0; // Return 0 to indicate successful completion
}

*/