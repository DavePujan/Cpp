/*
Call by Value-->
    When arguments are passed by value, a copy of the actual value is made and passed to the function. This means that changes made to the parameter inside the function do not affect the original argument.

    -->Does not affect original
    -->Creates a copy
    -->No special syntax

Call by Reference-->
    When arguments are passed by reference, a reference (or alias) to the original variable is passed to the function. This means that changes made to the parameter inside the function will directly affect the original argument.

    -->Affects original
    -->No copying; uses reference
    -->Uses & in parameter list
*/

#include <iostream>
using namespace std;

void increment(int num) {
    num++; // This modifies the local copy
}


void increment2(int &num) { // Note the '&' symbol
    num++; // This modifies the original variable
}

int main() {
    int x = 10;
    increment(x); //reference value means copy will be shared which doesn't affect actual value.
    cout << "Value of x: " << x << endl; // Output: Value of x: 10

    int y = 10;
    increment2(y); //original value address will be shared, which willdirectly affect actual value.
    cout << "Value of y: " << y << endl; // Output: Value of y: 11
    
    return 0;
}