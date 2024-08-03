#include <iostream>
using namespace std;

int main()
{
    int i=2;
    int n;
    int sum =0; 
    cin >> n;
    while(i<=n){
        if(i%2==0){
        sum = sum + i;
        i = i + 1;
        }
    }
    cout << "sum of all even number from 2 to " << n  << "is = " << sum << endl;
    return 0;
}