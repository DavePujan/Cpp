#include <iostream>
using namespace std;
int count=0;
void fun(){
    if(count==3) return;   // base condition
    cout<<count<< " ";
    count++;
    fun();  // recurive call
}

int main()
{
    fun();
    return 0;
}