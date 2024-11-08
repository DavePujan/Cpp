#include <iostream>
using namespace std;

int main() {
    int intVar;
    long long longVar;
    char charVar;
    float floatVar;
    double doubleVar;

    // Reading input
    cin >> intVar >> longVar >> charVar >> floatVar >> doubleVar;

    // Output each value with the required format
    cout << intVar << endl;
    cout << longVar << endl;
    cout << charVar << endl;
    printf("%.3f\n", floatVar);  // Printing float with 3 decimal places
    printf("%.9lf\n", doubleVar);  // Printing double with 9 decimal places

    return 0;
}

/*
Sample Input:
211916801 97592151379235457 p 19856.992 -5279235.721231465

Expected Output:
211916801
97592151379235457
p
19856.992
-5279235.721231465
*/