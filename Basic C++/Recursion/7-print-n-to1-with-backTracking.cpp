#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   //we want 4 3 2 1
   if(i>n) return;
   func(i+1,n);
   cout<<i<< " ";
}

int main(){

  int n;
  cin>>n;
  func(1,n);
  return 0;

}