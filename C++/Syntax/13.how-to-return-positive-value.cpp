
#include <cmath>
#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return abs(a-b); // we have to add cmath lib and have to type abs before our returning value to get answer positive.
}

int main() {
    int a=4,b=5;
    
    cout<<sum(a,b)<<endl;
    cout<<sub(a,b);
    
    return 0;
}
