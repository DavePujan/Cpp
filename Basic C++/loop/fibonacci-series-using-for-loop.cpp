#include <iostream>
using namespace std;

int main()
{
    int  n, a = 0, b = 1;
    cin>>n;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int temp=a+b;
        cout << temp << " ";

        a = b;
        b = temp;
    }
    return 0;
}