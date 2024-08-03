#include <iostream>
using namespace std;

int main()
{
    int i=2;
    int n;
    cin >> n;
    while(i<n){
        if(n%i==0){
            cout << "not prime" << endl;
            return 0;
        }
        i = i + 1;
    }
    cout << "prime" << endl;
    return 0;
}