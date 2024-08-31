//1
//23
//345

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 1;
//     int n;
//     cin >> n;
//     while (i <= n)
//     {
//         int j = 1;
//         int count = i;
//         while (j <= i)
//         {
//             cout << count << " ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }


// or without setting count variable

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i+j-1 << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}