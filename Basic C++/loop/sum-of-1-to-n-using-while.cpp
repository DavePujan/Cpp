#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int n;
    int sum = 0;
    cin>> n;
    while(i<=n){
        sum = sum + i;
        i = i+ 1;
    }
    cout << "sum of 1 to " << n << " = " << sum << endl;
    return 0;
}