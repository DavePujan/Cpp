#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int space =1;
        while(space<=i-1){
            cout<< " ";
            space=space+1;
        }
        int j= 1;
        while(j<=n-i+1){
            cout<< "*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}