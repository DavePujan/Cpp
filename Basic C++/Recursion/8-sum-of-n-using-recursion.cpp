#include <iostream>
using namespace std;
int ans=0;
void sum(int i,int n){
    
    if((i<1)){
        cout<<ans;
        return ;
    } 
    ans=ans+i;
    sum(i-1,n);
}

int main()
{
    int n;
    cin>>n;
    sum(n,n);
    return 0;
}


// or using the formula

// #include<bits/stdc++.h>
// using namespace std;
//  void solve(int N) {
//     int sum = N * (N + 1) / 2;
//     cout<<"The sum of the first "<<N<<" numbers is: "<<sum<<endl;
//   }
//  int main() {

//     solve(5);
//     solve(6);
//   }


// or using the functional way

// #include<bits/stdc++.h>
// using namespace std;

// int func(int n){
   
//    // Base Condition.
//    if(n == 0)
//    {
//        return 0;
//    }

//    // Problem broken down into 2 parts and then combined.
//    return n + func(n-1);

// }

// int main(){
  
//   // Here, let’s take the value of n to be 3.
//   int n = 3;
//   cout<<func(n)<<endl;
//   return 0;

// }