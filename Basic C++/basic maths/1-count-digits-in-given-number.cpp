#include <iostream>
using namespace std;

int main() //complexity O(log10(n))
{

int i,n,lastdigit;
cin>>n;
    while(n>0){
        lastdigit = n%10;
        n= n/10;
        i++;
    }
    cout<<i;
    return 0;
}

//or
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int n;
// cin>>n;

// int i= (int) ( log10(n) +1);
// cout<<i;
//  return 0;
// }