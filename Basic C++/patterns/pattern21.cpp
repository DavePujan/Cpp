#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
       
        int j= 1;
        while(j<=i){
            cout<< "*";
            j=j+1;
        }
         int space =1;
        while(space<=n-i){
            cout<< " ";
            space=space+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}