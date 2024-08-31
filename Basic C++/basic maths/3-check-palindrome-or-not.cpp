#include <iostream>
using namespace std;

int main() {

int n,rev=0;
cin>>n;
    int temp=n;
    while(n){
        rev=(rev*10)+(n%10);
        n= n/10;
    }
    cout<<rev<<endl;
        if(rev==temp)
        cout<<"Palindrome Number";
    else
    cout<<"Not Palindrome";

    return 0;
}