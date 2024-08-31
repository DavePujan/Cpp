#include <iostream>
using namespace std;

//without algo
// Function to find the GCD of two numbers by listing divisors
int gcd(int a, int b) {
    int gcd = 1; // Initialize the GCD to 1

    // Find the smaller of the two numbers
    int min_num = (a < b) ? a : b;

    // Loop from 1 to the smaller number to find common divisors
    for (int i = 1; i <= min_num; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; // Update gcd if i is a common divisor
        }
    }
    return gcd;
}



// Function to compute GCD using Euclidean algorithm
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }



int main() {
    int n1, n2;

    // Read two integers from the user
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    // Compute and print the GCD
    cout << "GCD of " << n1 << " and " << n2 << " is " << gcd(n1, n2) << endl;

    return 0;
}