/*
--> Function overloading in C++ allows you to define multiple functions with the same name but different  types or number parameter.

--> e eni jate j  select kari lese ke ene kai rit na fuction ni jarur chhe ane e ena mujab na parameter pass karavine je answer avto hase e return karavi dese.
*/

#include <iostream>
using namespace std;

// Different Number of Parameters:
// Function with two parameters
int add(int a, int b)
{
    return a + b;
}

// Overloaded function with three parameters
int add(int a, int b, int c)
{
    return a + b + c;
}

// Different Types of Parameters
// Function to display an integer
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    // Overloaded function to display a float
    void show(float a) {
        cout << "Float: " << a << endl;
    }

    // Overloaded function to display a string
    void show(const string &str) {
        cout << "String: " << str << endl;
    }


// Different Order of Parameters
// Function with parameters of types (int, double)
    void display(int a, double b) {
        cout << "Integer: " << a << ", Double: " << b << endl;
    }

    // Overloaded function with parameters of types (double, int)
    void display(double a, int b) {
        cout << "Double: " << a << ", Integer: " << b << endl;
    }
int main()
{
    cout << "Sum of 2 and 3: " << add(2, 3) << endl;        // Calls add(int, int)
    cout << "Sum of 2, 3, and 4: " << add(2, 3, 4) << endl; // Calls add(int, int, int)


    show(10);                 // Calls show(int)
    show(3.14f);              // Calls show(float)
    show("Hello, World!");    // Calls show(string)


    display(5, 3.14);    // Calls display(int, double)
    display(2.71, 10);    // Calls display(double, int)
    return 0;
}
