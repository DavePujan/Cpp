#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);  // means for 0 1 1 2 3 5 8 13 fib(7)=13=fib(6)+fib(5)

}

int main()
{   
    int n;
    cin>>n;
    cout<<n<<"th fibonacci "<<"is = "<< fib(n);
    return 0;
}