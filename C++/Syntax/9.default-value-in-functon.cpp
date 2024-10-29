/*Default Arguments-->
    -->Default arguments allow you to specify default values for function parameters. 
    
    -->If a caller does not provide a value for an argument, the default value is used.
*/

#include <iostream>
using namespace std;

void display(int a, int b = 10) {
    cout << "a: " << a << ", b: " << b << endl;
}

int main() {
    display(5);       // Uses default value for b
    display(5, 15);   // Overrides default value
    return 0;
}
