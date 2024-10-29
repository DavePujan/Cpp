/* Function Prototypes-->
    A function prototype is a declaration of a function that specifies the function's name, return type, and parameters but does not include the body. Prototypes allow you to inform the compiler about the function before its actual definition, enabling the function to be called before it is defined in the code.
*/

#include <iostream>
using namespace std;

int add(int a /*parameter*/, int b); // Function prototype

int main() {
    int result = add(5, 3); // Calling the function
    return 0;
}

int add(int a, int b) { // Function definition
    return a + b;
}
