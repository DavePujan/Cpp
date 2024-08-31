#include <iostream>
using namespace std;

int main()  // O(n) complexity
{
    int i,n;

    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<< " ";
        }
    }
    return 0;
}


//for O(sqrt(n)) complexity

// #include <iostream>
// #include <cmath>  // For sqrt() function
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Number must be positive." << endl;
//         return 1;
//     }

//     // Iterate from 1 to sqrt(n)
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             cout << i << " ";  // i is a divisor
//             if (i != n / i) {
//                 cout << n / i << " ";  // n / i is also a divisor, and distinct from i
//             }
//         }
//     }
//     cout << endl;
//     return 0;
// }
