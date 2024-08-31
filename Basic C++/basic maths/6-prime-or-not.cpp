#include <iostream>
using namespace std;

int main()
{
    int i,n,count=0;
     cin>>n;
    for(i=2;i<=n;i++){
        if(n%i==0){
        count = 1;
    }break;
    }

if(count==1)cout<<"not prime (false)";
else cout<<"prime (true)";
    return 0;
}