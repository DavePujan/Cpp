#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int count=0,ld, n;
    cin>>n;
    int temp=n,temp2=n,sum=0;

    while(temp>0){ // loop for count in pow
        temp=temp/10;
        count++;
    }
    
    while(n){
        ld=(n%10); 
         n=n/10; 
        sum = sum + pow(ld, count);
    }

    if(sum==temp2)
        cout<<"True";
    else
        cout<<"False";
  
    return 0;
}