// ****
// ****
// ****
// ****

#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int n;
    cin >> n;
    while(i<n){
        int j=0;
        while(j<n){
            cout << " *";
            j = j +1;
        }
        cout << endl; //for next line
        i = i+1;
    }

    return 0;
}