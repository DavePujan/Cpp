#include <iostream>
using namespace std;

int sum(int a,int b){
        return a+b;
    }
int main()
{
    int a,b;
    cin>>a,cin>>b;
    cout<< "a + b = " <<sum(a,b);
    return 0;
}