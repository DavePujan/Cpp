/*
Constant Arguments-->
    -->When you pass arguments as constant, you indicate that the function will not modify the passed argument. 
    -->This is especially useful when passing large objects, such as classes or structures, to avoid unnecessary copying while ensuring that the function does not alter the data.
    -->Ensure that function parameters cannot be modified
*/

#include <iostream>
using namespace std;

void printValue(const int value) {
    cout << "Value: " << value << endl;
    // value++; // Error: cannot modify a constant argument
}

int main() {
    int x = 20;
    printValue(x);
    return 0;
}
